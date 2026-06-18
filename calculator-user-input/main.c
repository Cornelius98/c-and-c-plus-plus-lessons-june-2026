#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare empty variables to receive data later
    int a;
    int b;

    //Label to enter number && promptt
    printf("Enter First Number \n");
    scanf("%d", &a);

    printf("Enter Second Number \n");
    scanf("%d", &b);

    //Calculate sum and print
    int sum = a + b;
    printf("The sum is: %d \n", sum);

    //Calculate difference and print
    int difference = a - b;
    printf("The difference is: %d \n", difference);

    //Calculate product and print
    int product = a * b;
    printf("The product is: %d \n", product);


    int quotient = a/b;
    printf("The quotient is: %d \n", quotient);

    int modulus = a%b;
    printf("The modulus is: %d \n", modulus);

    return 0;
}
