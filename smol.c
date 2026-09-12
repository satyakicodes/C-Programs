#include <stdio.h>
int main()
{
    int a,b,c, min=0;
    printf("Enter the numbers...");
    scanf("%d %d %d", &a, &b, &c);
    printf("The numbers are:... %d %d %d \t", a, b, c);
    if(a<b)
    min=a;
    else 
    min=b;

    if(min>c)
    min=c;

    printf("The smallest number is: %d", min);

}