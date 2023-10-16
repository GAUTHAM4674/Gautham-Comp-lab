/*This program is to print multiplication table of a number*/
#include<stdio.h>
int main()
{
int a, i, S;
S=1;
printf ("enter number");
scanf ("%d", &a);
for (i=1; i<=10 ; i++)
{
S=a*i;
printf ("%d", S);
printf("\n");
}
return 0;
}

