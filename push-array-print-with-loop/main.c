#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5];
    for(int i =0; i<5; i++){
        printf("Enter Number %d: \n", i);
        int x;
        scanf("%d", &x);

        printf("\n\n");
        arr[i] = x;
    }

    for(int i = 0;i<5; i++){
        printf("You Entered %d \n", arr[i]);
    }
    return 0;
}
