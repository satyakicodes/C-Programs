/*#include<stdio.h>
int main()
{
  int a,b,i=0,j=0;
  int max1=a, max2=b;
  printf("Enter two numbers...");
  scanf("%d %d", &a , &b);

  for(i=1;i<=a;i++)
  {
    if(a%i==0)
    {
        if(i>max1)
        max1=i;
    }
  }

  for(j=1;j<=b;j++)
  {
    if(b%j==0)
    {
        if(i>max1)
        max2=j;
    }
  }
  if(max1==max2)
  printf("highest common factor is "  );
  return 0;
  
}*/
  #include <stdio.h>
int main()
{
    int n1,n2,h,m;

    printf("enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    m=(n1<n2)?n1:n2;
    
    for (int i=1;i<=m;i++)
    {
        if(n1%i==0 && n2%i==0)
        h=i;
    }
    printf ("HCF= %d",h);
}
