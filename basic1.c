#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    //addition
    int sum= a+b;
    printf("The sum of the numbers is: %d\n" , sum);

    //subtraction
    int sub= a-b;
    printf("The difference of the two numbers are: %d\n" , sub);

    //multiplication
    int mul= a*b;   
    printf("The product of the two numbers are: %d\n" , mul);

    //division

    if(b != 0)
     {
        int div= a/b;
        printf("The division of two numbers is: %d\n" , div);
     } 
     else
      {
        printf("Division by zero is not allowed.\n");
      }
   
}