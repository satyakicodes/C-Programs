#include<stdio.h>
int main()
{
    int r1,r2,i,j,c;
    printf("Enter the range of numbers to find prime numbers... \n");  
    scanf("%d %d",&r1,&r2);
    for(i=r1;i<r2;i++)
    {  
        if(i<2)
            continue;
        c=0;
        for(j=2;j<=i/2; j++)
        {
            if(i%j==0)
            {
                c++;
        
            }
        }
        if(c==0)
        {  

            printf(" %d ",i);
        }
    } 
}