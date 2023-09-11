/*This program is to check if 3 numbers are equal or not*/
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers");
scanf("%d %d %d", &a, &b, &c);
if (a==b && b==c && c==a)
printf ("all three numebers are equal");
else
printf("The numbers are unequal");
return 0;
}

