#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int* b = &a;

    //Printing the numeric value inside a pointer
    printf("De-reference value of pointer *b: %d \n", *b);

    //Printing memory address saved in a pointer
    printf("The Memory address of a pointer *b is: %p \n", (void*)b);
    return 0;
}
