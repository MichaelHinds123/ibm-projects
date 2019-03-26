/*
Michael Hinds Caesar Project
pset2
cs50x
*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // checks to make sure the user only input 2 command line arguments
    if(argc != 2)
    {
        // tells the user their input was incorrect
        printf("Sorry, incorrect amount of arguments\n");
        // stops the program
        return 1;
    }

    // creating an integer to store user input later
    int key;

    // storing the user inputted key into an integer labeled "key"
    key = atoi(argv[1]);

    // string storing the user input
    string str = get_string("plaintext:  ");

    // integer storing the length of the string
    int length = strlen(str);

    // loop through the length of the string
    for(int i=0; i<length; i++)
    {
        // checks the i^th position of the string to see if it's a lower case char
        if(islower(str[i]))
        {
            // replaces the value in the i^th position with a new value adding the key,
            // subtracting 97, taking the remainder of 26, and adding 97 (looping around the alphabet)
            str[i] = ((((str[i] + key) - 'a') % 26) + 'a');
        }
        // checks the i^th position of the string to see if it's a upper case char
        else if(isupper(str[i]))
        {
            // replaces the value in the i^th position with a new value adding the key,
            // subtracting 65, taking the remainder of 26, and adding 65 (looping around the alphabet)
            str[i] = ((((str[i] + key) - 'A') % 26) + 'A');
        }

    }

    // prints out the cipher text
    printf("ciphertext: %s\n", str);

    // ends the program
    return 0;
}