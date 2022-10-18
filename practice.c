#include <stdio.h>

int main()
{

    int a[100];
    int size, i, j, count=0;

    printf("size of array: ");
    scanf("%d", & size);
    printf("Enter the element of array:\n");
    for(i=0; i<size; i++) {
        printf("Element -%d: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0; i<size; i++){
        count=0;
        for(j=0; j<size; j++){
            if(a[i] == a[j]){
            count++;
            }
            if(count == 1){
            printf("Unique element: %d ", count);
              }
        }
        printf("\n\n");
    }
    
}