/*This program is to print a given pattern*/
#include<stdio.h>
int main()
{
int a, i, n ;
printf("enter number of rows");
scanf("%d", &n);
{
for (i=1; i<=n ; i++)
{
for (a=1; a<=i;a++)
{
printf("%d",a);
}
printf("\n");
}
}
return 0;
}

