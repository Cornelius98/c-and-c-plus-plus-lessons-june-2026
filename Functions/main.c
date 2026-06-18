#include <stdio.h>
#include <stdlib.h>

void add();
int calculate();
int main(){
    /*
    * Add the four sets of numbers:
    * 10,20 30,40 50,40 100,50
    *
    **/

    //Addition without using functions
    int a = 10;
    int b = 20;
    int sum = a + b;
    printf("Sum found without function: %d \n", sum);

    int a_1 = 30;
    int b_1 = 40;
    int sum_1 = a_1 + b_1;
    printf("Sum found without function: %d \n", sum_1);

    int a_2 = 40;
    int b_2 = 50;
    int sum_2 = a_2 + b_2;
    printf("Sum found without function: %d \n", sum_2);

    int a_3 = 100;
    int b_3 = 50;
    int sum_3 = a_3 + b_3;
    printf("Sum found without function: %d \n", sum_3);

    //Invoking (Executing, running) a function
     /*
    * Add the four sets of numbers:
    * 10,20 30,40 50,40 100,50
    *
    **/
    add(10, 20);
    add(30, 40);
    add(50, 40);
    add(100, 50);


    //Return statement testing
    int a_returned = calculate(2, 2);
    int test_a = a_returned * 10;
    printf("The returned valued multiplied by 10 is: %d", test_a);
    return 0;
}
void add(int a, int b){
    int sum = a + b;
    printf("Sum inside function: %d \n\n", sum);
}
int calculate(int a, int b){
    int sum = a + b;
    return sum;
}
