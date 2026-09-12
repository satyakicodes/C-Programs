#include <stdio.h>
#include <math.h>
int main()
{
    int n,dup,c=0,d,i=0,dup1;
    float sum=0;

    printf("Enter a number to check: ");
    scanf("%d", &n);
    dup=n;
    dup1=n;
    while(n!=0)
    {
      c++;
      n/=10;
    }
     
   while(dup!=0)
   {  
      sum+= pow((dup%10 ),c);
      c--; 
      dup/=10;
   }
   if(sum==dup1)
   {
   printf("Entered number is a dissarium number ");
   }
   else
   {
   printf("Entered number is not a dissarium number ");
   }


}