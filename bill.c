#include<stdio.h>
float main()
{
   float units, bill,totamt=0.2f;
   printf("Enter the no. of units consumed...") ;
   scanf("%f", &units);

   if(units>=0 && units <=50)
   {
      bill=units*2.0;

   }
   else if(units>=51 && units <=150)
   {
       bill=50*2.0 + (units-50)*4.0;
   }
   else if (units>=151 && units <=250)
   {
       bill = 50*2 + 100*4.0 +(units-150)*6.0;
   }
   else
   {
   bill= 50*2 + 100*4.0 + 100*6.0 + (units-250)*8.0;
   }

   totamt+=bill;
   printf("The total amount charged is... %f " , totamt);
}