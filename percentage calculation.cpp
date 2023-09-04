/*This program is to calculate percentage of student*/
#include<stdio.h>
int main()
{
int a,b,c,d,e,f;
printf("Enter 5 subjects marks");
scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
f=a+b+c+d+e;
printf("The total percentage of the student is %d",f/5);
return 0;
}

