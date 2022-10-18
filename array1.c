#include <stdio.h>

int main()
{
    int arr[100];
    int i, n;
    printf("\nvalues in an array  display it in reverse order\n\n");

    printf("Enter the the element of store in the array: ");
    scanf("%d", &n);

    printf("Input %d number of element in the array : \n", n);
    for(i = 0; i < n; i++)
    {
        printf("Element -%d :" , i);
        scanf("%d", &arr[i]);
    }
    printf("\n The value store in the array :\n");
    for(i = 0; i < n; i++)
    {
        printf("%5d",arr[i] );
    }
    printf("\n\nThe value store into reverse array: \n");
    for(i = n-1; i>=0; i--)
    {
        printf("%5d", arr[i]);
    }
}