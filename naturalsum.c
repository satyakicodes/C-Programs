#include <stdio.h>
int main()
{
   int n=1,sum=0,terms;
   printf("Enter number of terms ");
   scanf("%d",&terms);
   for(int i=1;i<=terms;i++)
   {
    sum+=n;
    n++;

   }
   printf("The sum of is...%d",sum);


}