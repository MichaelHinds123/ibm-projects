// Recursive program using Summation (The n^th triangle number).

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int recursion(int);

int main(void)
{
    int n;
    
    do
    {
        n = get_int("Positive integer: ");
    }
    while(n<1);
    
    int answer = recursion(n);
    
    printf("%i\n", answer);
}

int recursion(int m)
{
    if(m<=0)
    {
        return 0;
    }
    else
    {
        return (m + recursion(m-1));
    }
}