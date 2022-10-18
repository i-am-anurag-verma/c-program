#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    printf("Enter 10 element in array: \n");

    for(i = 0 ; i < 10; i++)
    {
        printf("Element: %d :", i);
        scanf("%d", &arr[i]);
    }

    printf("Element in array are:  ");
    for(i = 0; i < 10; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n\n");
}