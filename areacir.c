#include <stdio.h>
#include <math.h>
 int main()
 {
    float r,area,pi;
    printf("Enter the radius of the circle...");
    scanf("%f", &r);
    pi=3.14;
    area= pi*(pow(r,2));
    printf("the area of the circle with radius %f is: %.2f",r,area);
    return 0;
    
 }