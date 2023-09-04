/*This program is to convert Km to m to cm to mm*/
#include<stdio.h>
int main()
{
float a,b,c,d;
printf("Enter kilometers value");
scanf("%f", &a);
b=a*1000;
c=b*100;
d=10*c;
printf("Distance is %f kilometers \n",a);
printf("Distance is %f meters \n",b);
printf("Distance is %f centimeters \n",c);
printf("Distance is %f millimeters",d);
return 0;
}

