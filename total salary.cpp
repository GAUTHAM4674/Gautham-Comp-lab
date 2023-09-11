/*This program is to calculate basic salary*/
#include<stdio.h>
int main()
{
int a,b,c,d;
printf ("HRA will be 16 percent \n DA will be 44 percent \n");
printf("enter your basic salary");
scanf ("%d", &a);
b= (16*a)/100;
c= (44*a)/100;
d=a+b+c;
printf ("the total salary is %d",d);
return 0;
}

