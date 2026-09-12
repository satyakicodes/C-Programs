#include <stdio.h>
float main()
{
    float wt;
    printf("Enter the weight in kilograms \n");
    scanf("%f", &wt);
    printf("converiting the weight in grams: %.3f", (wt*1000));

}