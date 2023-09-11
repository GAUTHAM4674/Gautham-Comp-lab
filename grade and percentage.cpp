/*This program is to calculate grade and percentage*/
#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf ("enter marks for 5 subjects");
scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
f= (a+b+c+d+e)/5;
printf ("the percentage of the student is %d",f);
if (f >= 90)
printf ("Grade A");
else if (f>=80 && f<90)
printf ("Grade B");
else if (f>= 70 && f<80)
printf ("Grade C");
else if (f>=60 && f<70)
printf ("Grade D");
else if (f>=50 && f<60)
printf ("Grade E");
else printf ("Grade F");
return 0;
}
