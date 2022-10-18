#include <stdio.h>

int main()
{
    int n, r, t, sum=0;

    printf("Input a number: ");
    scanf("%d", &n);

    for(t=n; n!=0; n=n/10);
    {
        r=n%10;
        sum=sum*10+r;
    }
    if(t==sum){
        printf("%d is a palindrome number\n", t);
    }else{
        printf("%d is not a palindrome number \n", t);
    }
   return 0;
}