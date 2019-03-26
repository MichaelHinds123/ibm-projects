#include <cs50.h>
#include <stdio.h>

int main(void){

    float userInput = 0;            // create a float variable to store user input
    int totalCoins = 0;             // create a variable to keep track of the amount of coins

    do
    {
        userInput = get_float("How much change? ");   // takes the user input and puts it into a float variable
    }while(userInput<0); // checks to make sure the user input is a positive value
                         // If negative, returns to the beginning of the loop. If positive, continues through program.

    while(userInput>.249) // Since money goes to 2 decimal places, checking at 3 decimal places will give a correct result
    {
        totalCoins++;     // increase the counter to keep track of the number of coins
        userInput = (userInput-.25);
    }

    while(userInput>.099)
    {
        totalCoins++;
        userInput = (userInput-.10);
    }

    while(userInput>.049)
    {
        totalCoins++;
        userInput = (userInput-.05);
    }

    while(userInput>.009)
    {
        totalCoins++;
        userInput = (userInput-.01);
    }

    printf("There are %i coins\n", totalCoins);   // prints the least amount of coins needed to give proper change
}