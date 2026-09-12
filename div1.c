#include <stdio.h>
float main()
{
    float num,den;
    //Enter the nuerator and denominator...
    printf("Enter the numerator and denominator: ");
    scanf("%f %f",&num,&den);

    if(den==0)
    {
        printf("division is not allowed when the denominator is zero");
    }
    else
    {
        printf("the final answer after dividing is...: %.3f\n" ,num/den);
    }
}

//Now this same program will be done using the return type `int`. i.e. the return type of the main function will be changed to `int`.
/*int main()
{
    float num,den;
    //Enter the nuerator and denominator...
    printf("Enter the numerator and denominator: ");
    scanf("%f %f",&num,&den);

    if(den==0)
    {
        printf("division is not allowed when the denominator is zero");
    }
    else
    {
        printf("the final answer after dividing is...: %.3f\n" ,num/den);
    }
    return 0; ...(this means the main func is returning 0 not the else loop that is why it is kept outside the else loop)
}*/   