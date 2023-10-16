/*This program is to print a given pattern*/
#include<stdio.h>
int main()
{
int a, i, n, b;
printf("enter number of rows");
scanf("%d", &n);
{
for (i=1; i<=n ; i++)
{
for (a=1; a<=n-i; a++)
printf (" ");
for (b=1; b<=n; b++)
printf ("*");
printf ("\n");
}
}
return 0;
}
