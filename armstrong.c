#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,c=0,dup1,dup2;
    float sum=0.0;
    printf("Enter a number to check...");
    scanf("%d", &n);
     dup1=n;
     dup2=n;

    while(n!=0)
    {
        n/=10;
        c++;
       

    }
    while(dup2!=0)
    {
      d=dup2%10;
      sum+=pow((float)d,c);
      dup2/=10;
    }

    if(sum==dup1)
    {
        printf("the number is an armstrong number");
    }
    else 
    {
        printf("the number is not an armstrong number");
    }
}