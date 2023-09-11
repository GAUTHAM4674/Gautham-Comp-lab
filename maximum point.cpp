/*This program is to give maximum output number*/
#include<stdio.h>
int main()
{
int a,b,c;
printf ("enter the three numbers");
scanf ("%d %d %d", &a, &b, &c);
if (a>=b && a>=c)
printf ("the maximum point is %d",a);
else if (b>=a && b>=c)
printf (" the maximum point is %d",b );
else printf ("the maximum point is %d",c );
return 0;
}
