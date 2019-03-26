/*
Please display a program that creates a struct named student that stores
multiple values and prints out the values for each student
*/

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

#include "structEx.h"

int main(void)
{
    int userInput = 0;

    do //error checking
    {
        userInput = get_int("How many students are there? : ");
    }while(userInput <= 0);

    students stu[userInput]; //struct variable

    //for the length of userinput ask for all students info
    for(int i = 0; i < userInput; i++)
    {
        stu[i].name = get_string("Whats the name of student number %i: ", i + 1);
        stu[i].id = get_int("Whats the id number of student number %i: ", i + 1);
        stu[i].grade = get_char("What is student number %i's grade: ", i + 1);
    }
    //prints out all students info
    for(int j = 0; j < userInput; j++)
    {
        printf("%s, id number %i has a grade of %c.\n", stu[j].name,stu[j].id,stu[j].grade);
    }

}
//      printf("The bites read were: ");
//      for(int i = 0; i < 10; i++)
//          {
//              printf("%c", buffer[i]);    
//          }