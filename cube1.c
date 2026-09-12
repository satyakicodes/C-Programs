#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number...");
    scanf("%d",&n);
    printf("The cube of %d is %.0f",n,pow(n,3));
    return 0;
}

/* Alternative

int main()
{
int n;
printf("Enter a number...");
scanf("%d",&n);
printf("The cube of %d is: %d",n,n*n*n);
} */
