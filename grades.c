// example showing switch cases and using math library functions
// week 2 pset 3
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main () {

   /* local variable definition */

   char grade = ' ';

   float userInput;

   do
   {
       userInput = get_float("Please enter your class percentage\n");
   }while(userInput < 0 || userInput > 100);

   int percentage = round(userInput); // Rounding user input and storing it into an integer

   switch(percentage) {
      case 90 ... 100 :
         printf("Excellent!\n" );
         grade = 'A';
         break;
      case 80 ... 89 :
         printf("Good Job.\n");
         grade = 'B';
         break;
      case 70 ... 79 :
         printf("Well done.\n" );
         grade = 'C';
         break;
      case 60 ... 69 :
         printf("You passed.\n" );
         grade = 'D';
         break;
      case 0 ... 59 :
         printf("Better try again\n" );
         grade = 'F';
         break;
      default :
         printf("Invalid grade\n" );
   }

   printf("Your grade is  %c\n", grade );

   return 0;
}