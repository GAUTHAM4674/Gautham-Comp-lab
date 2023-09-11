/*This program is to calculate electricity bill*/
#include<stdio.h>
int main()
{
int a,b;
printf ("the sur charge is 200 rupees \n the charge per unit is 100 \n");
printf ("enter number of units");
scanf ("%d", &a);
b= 200 + a*100;
printf ("total electricity bill is %d",b);
return 0;
}

