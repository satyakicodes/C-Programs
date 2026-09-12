/*#include<stdio.h>

int main()
{
    char ch;
    float a, b;
    printf("Enter any 2 numbers\n");
    scanf("%f%f", &a, &b);
    printf("Enter your choice: \n + or - or * or /\n");
    scanf(" %c", &ch);

    switch(ch)
    {
        case '+': printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-': printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*': printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/': printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            break;
        default: printf("Invalid choice\n");
    }

    return 0;
}*/

#include<stdio.h>
void main()
{
    char ch;
    float a,b;
    printf("Enter any 2 numbers\n");
    scanf("%f %f",&a,&b);
    printf("Enter your choice: \n + or - or * or /\n");
    scanf(" %c",&ch);
    switch(ch)
    {
        case '+': printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case '-': printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case '*': printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case '/': printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            break;
        default: printf("Invalid choice\n");
    }

}                  