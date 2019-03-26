#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{


    if(argc != 2) //Error checking the total count of arguments
    {
        printf("Wrong amount of inputs. Program will close.\n");
        return 1;
    }
    else
    {
        for(int j = 0; j < strlen(argv[1]); j++) //Error checks the user input to make sure it is all letters
        {
            if(!isalpha(argv[1][j])) //If it's NOT an alphanumeric character, go in here.
            {
                printf("Key is not alphabetic chars.");
                return 1;
            }
        }
    }

     string k = argv[1];        //Convert the user input into a string
     int keyL = strlen(argv[1]); //Find Key used to decipher
     int key = 0; //current key value
     int j = 0; //second number used for tracking which key element is next
     string plainText = get_string("Plaintext: "); //getting plain text from the user
     for(int i = 0; i < strlen(plainText); i++) //cycles for length of plaintext
     {
         key = tolower(k[j%keyL]) - 'a'; //lowers key to lowercase and finds key value
         if (islower(plainText[i]) != 0) //if the current location of I is a lower case letter, go in here
         {
            plainText[i] = ((((plainText[i] + key) - 97) % 26) + 97); //Stores the new ciphered letter
            j++; //only change when used
         }
         else if (isupper(plainText[i]) != 0) //if the current location of I is an upper case letter, go in here
         {
            plainText[i] = ((((plainText[i] + key) - 65) % 26) + 65);
            j++;
         }
     }

    printf("ciphertext: %s\n", plainText);

    return 0; // ends the program
}