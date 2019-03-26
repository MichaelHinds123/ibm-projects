// example to show switching lower and upper case letters in a string using for loops and array notation
// week 1 continued pset 2
#include <cs50.h>
#include <stdio.h>
#include <string.h>      // Step one, include libraries and int main
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)        // Step two, check for amount of CL arguments
    {
        printf("Input not valid, please restart program\n");
        return 1;
    }

    string text = argv[1];                    // Step three, Store string in variable

    for(int i = 0; i < strlen(text); i++)     // Step four, loop through string
    {
        if(islower(text[i]) != 0)
        {
            text[i] = toupper(text[i]);
        }
        else if(isupper(text[i]) != 0)  // Step five, checking for upper/lower
        {
            text[i] = tolower(text[i]); // Step six, change letter based on case
        }
        else
        {
            // do nothing
        }
    }
    printf("%s\n", text);
}