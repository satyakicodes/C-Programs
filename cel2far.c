#include <stdio.h>
float main()
{
    float cel, far;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &cel);
    far= (cel*9/5)+32;
    printf("The temperature in Fahrenheit is: %.2f", far);

}