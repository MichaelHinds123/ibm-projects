#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int userInput;

    do{
        // takes the user input and puts it into a float variable called userInput
        userInput = get_int("Enter a number between 0 and 23: ");
    }
    // Check to see if the integer is greater than 0, or less than 23
    while(userInput < 0 || userInput > 23);

    for(int i=0; i<userInput; i++){          // rows
        for(int j=0; j<=userInput; j++){     // columns

            if(i+j < (userInput-1))          // checks whether you need a space
            {
                printf(" ");
            }

            else                     // if you don't need a space, print a #
            {
                printf("#");
            }

        }
        printf("\n");                // starts a new row
    }

}