#include <stdio.h>
float main()
{
    float wt;
    printf("Enter the weight in grams \n");
    scanf("%f", &wt);
    printf("converting the weight in kilograms: %.3f", (wt/1000));

}