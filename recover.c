#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 512

int main(void)
{
    // open memory card file
    FILE* input = fopen("card.raw", "r");
    if (input == NULL)
    {
        printf("Could not open card.raw.\n");
        return 2;
    }

    // create buffer
    unsigned char buffer[BUFFER_SIZE];

    // filename counter
    int filecount = 0;

    FILE* picture = NULL;

    char filename[8];

    // check if we've found a jpeg yet or not
    // once true, it never swaps back to false
    bool jpg_found = false;

    // go through cardfile until there aren't any blocks left
    while (fread(buffer, BUFFER_SIZE, 1, input) == 1)
    {
        // read first 4 bytes of buffer and see if jpg signature using bitwise on last byte
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xe0) == 0xe0)
        {
            if (jpg_found == true)
            {
                // We found the start of a new pic so close out current picture
                fclose(picture);
            }
            else
            {
                // jpg discovered and now we have the green light to write
                jpg_found = true;
            }

            sprintf(filename, "%03d.jpg", filecount);
            picture = fopen(filename, "a");
            filecount++;
        }

        if (jpg_found == true)
        {
            // write 512 bytes to file once we start finding jpgs
            fwrite(&buffer, BUFFER_SIZE, 1, picture);
        }

    }

    // close files
    fclose(input);
    fclose(picture);

    return 0;
}