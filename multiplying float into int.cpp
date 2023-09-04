/*This program is to multiply two float numbers*/
#include<stdio.h>
int main()
{
float a,b,c;
int d;
printf("Enter two numbers");
scanf("%f %f", &a, &b);
c=a*b;
d=(int)c;
printf("The float number is %f \n",c);
printf("The int number is %d",d);
return 0;
}

