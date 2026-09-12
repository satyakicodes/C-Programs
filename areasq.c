#include <stdio.h>
#include <math.h>
int main()
{
    float s, areasq;
    printf("Enter the side of square: ");
    scanf("%f",&s);
    areasq= pow(s,2);
    printf("The area of the square is :%.2f\n",areasq);
    return 0;


}