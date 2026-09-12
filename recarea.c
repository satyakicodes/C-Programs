#include <stdio.h>
int main()
{
    float l,b,area;
    printf ("Enter the length and the breadth of the rectangle :");
    scanf("%f %f",&l,&b);
     area=l*b;
     printf("The area of the rectangle with length %f and breadth %f is: %f",l,b,area);
     return 0;
}