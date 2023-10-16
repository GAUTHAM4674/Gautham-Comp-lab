/*This program is to find factorial of a number*/
#include<stdio.h>
int main()
{
int a, i, S;
S=1;
printf ("enter number");
scanf ("%d", &a);
for (i=1; i<=a ; i++)
{
S=S*i;
}
printf ("%d", S);
return 0;
}

