/*This program is to swap two numbers without 3rd varaible*/
#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers");
scanf("%d %d", &a, &b);
a=a+b;
b=a-b;
a=a-b;
printf("The numbers are %d %d",a,b);
return 0;
}

