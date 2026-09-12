#include <stdio.h>
int main() 
{
  int num;
  printf("enter a number to check ");
    scanf("%d", &num);
    if(num%2==0)
    printf("The Entered number is divisible by 2");
    else 
    printf("The entered number is not divisible by 2");
}