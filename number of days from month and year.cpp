/*This program is to print number of days from month and year*/
#include<stdio.h>
int main()
{
int a,b;
printf("enter the year number");
printf("enter month number");
scanf("%d %d", &a, &b);
if (b = 1|| b=3 || b=5 || b=7 || b=8|| b=10|| (b=12))
printf("31 days");
else if (b= 4 || b=6 || b=9|| b=11) 
printf("30 days");
else if (b =2 && (a%4==0 % ( a%100 !=0 || a%400 ==0))) 
printf("29 days");
else printf("28 days");
return 0;
}
