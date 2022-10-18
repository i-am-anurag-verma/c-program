
#include <stdio.h>

int main()
{
    int n, r, temp, sum=0;
    printf("enter the element:");
    scanf("%d", &n);

    for(temp = n; n!=0; n=n/10)
    {
        r=n%10;
        sum=sum+(r*r*r);
    }
    if(sum==temp)
    {
        printf("%d is an armstrong no.\n", temp);
    }
    else{
        printf("%d is not an armstrong no.\n", temp);
    }
}
