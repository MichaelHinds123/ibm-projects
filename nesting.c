// example showing nested for loops
// week 1 pset 1
#include <stdio.h>
#include <cs50.h>

int main(void)
{

    float userInput = 0;
    float savings = 0;
    userInput = get_float("How much money would you like to deposit?");

    for(int month=1; month<=12; month++)
    {
        for(int days=1; days<=30; days++)
        {
            if(days==15 || days==30)
            {
                savings+=userInput;  // savings = savings+userInput;
            }
        }
    }
    printf("Your total yearly savings is: %.2f\n", savings);

}