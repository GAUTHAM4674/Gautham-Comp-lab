/*This program is to find sum of first N natural numbers*/
#include<stdio.h>
int main()
{
int a, i, S;
S=0;
printf ("enter number");
scanf ("%d", &a);
for (i=1; i<=a ; i++)
{
S=S+i;
}
printf ("%d", S);
return 0;
}

