/*This program is to check weather the given year is a leap year*/
#include<stdio.h>
int main()
{
int a;
printf ("enter the year");
scanf ("%d", &a);
if (a%4==0 % ( a%100 !=0 || a%400 ==0))
printf ("the given year is a leap year");
else printf ("the given year is not a leap year");
return 0;
}

