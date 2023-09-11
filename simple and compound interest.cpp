/*This program is to calculate simple and compound interest*/
#include<stdio.h>
#include<math.h>
int main()
{
int a, b, c, d;
printf ("The interest is 8 compounded 2 times every year\n");
printf("enter principal amount and time period\n");
scanf("%d %d", &a, &b);
 c= (a*b*8) /100;
printf ("simple interest is %d\n",c);
d=a*(pow(1+(8/2),2*b));
printf("the compound interest is %d",d);
return 0;
}
