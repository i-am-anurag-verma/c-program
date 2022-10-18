int main()
{
   int i,n,sum=0;
   float avg;
   printf("enter 10 numbers:\n");
   for(i=1;i<=10;i++)
   {
       printf("number-%d:",i);
       scanf("%d",&n);
       sum+=n;
       avg=sum/10.0;
   }
       printf("the sum of 10 numbers:%d\nThe averag is :%.2f",sum,avg);
    return 0;
}
