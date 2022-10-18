#include <stdio.h>

int main()
{
    int a=0, b=1, i, n, c;

    printf("Enter No. of elements: ");
    scanf("%d", &n);

    printf("%d%5d", a, b);
    for(i=1; i<n; i++)
    {
        c=a+b;
        a=b;
        b=c;
    //   printf("%5d", c);
       
    }
      printf("\n fibonacci: %d\n", c);
      
}