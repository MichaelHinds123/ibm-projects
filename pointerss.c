// documentation to explain and understand pointers
// Sample for week 3, pset4
#include <stdio.h>

int main(void)
{
    char ch = 'c';
    char *chptr = &ch;

    int i = 20;
    int *intptr = &i;

    float f = 1.20000;
    float *fptr = &f;

    char *ptr = "I am a string";


    printf("\n [%c] = *chptr\n [%d] = *intptr\n [%f] = *fptr\n [%c] = *ptr\n [%s] = ptr\n", *chptr, *intptr, *fptr, *ptr, ptr);
    // %p prints the pointer value
    printf("\n [%p] = &chptr\n [%p] = &intptr\n [%p] = &fptr\n [%p] = &ptr\n [%p] = ptr\n", &chptr, &intptr, &fptr, &ptr, ptr);
    return 0;
}