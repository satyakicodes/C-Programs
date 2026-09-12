#include <stdio.h>
float main()
{
    float p,tim,r=8.0,si; // r: rate of interest = 8 % (say)
    printf("enter the principal amount and the time in years \n");
    scanf("%f %f", &p,&tim);
    si=(p*tim*r)/100;
    printf("the simple interest is: %.2f",si);  
}