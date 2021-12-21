//BUS-244-043/2018
//MWANGOE AGNES NDELA

#include<stdio.h>
#include<math.h>

const float Rate = 10;
int main() 
{
    int i;
    float p, t, ci, Tci;
    printf("Enter Principal Amount: ");
    scanf("%f", &p);
    printf("Period(years): ");
    scanf("%f", &t);
    for ( i=1; i<=t; i++) 
    {
        ci= p * pow((1 + Rate/100), i) - p;
        printf("Year %d Compound Interest: %0.2f\n", i, ci);
        Tci += ci;
    }
    printf("\nTotal Compound Interest: %0.2f", Tci);
    return 0;
}
