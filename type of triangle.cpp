/*This program is to find the type of triangle*/
#include<stdio.h>
int main()
{
int a,b,c;
printf ("enter the three sides");
scanf ("%d %d %d", &a, &b, &c);
if (a==b && b==c && c==a)
printf ("the triangle is equilateral");
else if (a!=b && b!=c && c!=a)
printf ("the traingle is scalene");
else printf ("the triangle is isosceles" );
return 0;
}
