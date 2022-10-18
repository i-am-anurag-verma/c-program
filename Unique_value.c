#include <stdio.h>

int main()
{
    int a[100];
    int size, i, j, count=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter %d element of array: \n", size);
    for(i=0; i<size; i++)
    {
        printf("Element - %d: ", i);
        scanf("%d",&a[i]);
    }
    for(i=0; i<size; i++)
    {
        count=0;
        for(i=0; i<size; i++)
        {
            if(a[i]==a[j]){
              count++;
        }
        if(count==1){
            printf("unique element : %d  ",a[i]);  
        }
    }
    
}
return 0;
}