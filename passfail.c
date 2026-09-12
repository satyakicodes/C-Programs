#include <stdio.h>
int main()
{
    int marks ;
    printf("Enter marks of the student...");

    scanf("%d", &marks);
    if(marks>=75)
    {
        printf("The student has passed with distinction");
    }
    else if(marks>=60 && marks<75)
    {
        printf("The student has passed with first class");
    }
    else if(marks>=50 && marks<60)
    {
        printf("The student has passed with second class");
    }
    else if(marks>=40 && marks<50)
    {
        printf("The student has passed with third class");
    }
    else
    {
        printf("The student has failed");
    }
    return 0;
}