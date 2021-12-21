#include<stdio.h>
int main()
{
    float units;
    float cost;
    float amount;

    printf("Enter the units consumed: ");
    scanf("%f", &units);

   if (units<=100)
   {

       amount=200;
   }
  else  if (units<=150)
   {
       amount=200+((units-100)*10);
   }
 else  if (units<=200)
   {
    amount=200+500+((units-150)*20);
   }
  else if (units>200)
  {
          amount=200+500+1000+((units-200)*15);

  }

         printf("The amount to be paid is: Ksh %.2f" ,amount);

    return 0;
}