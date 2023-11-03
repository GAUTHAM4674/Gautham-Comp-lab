#include<stdio.h>
int main ()
{
	int i,n,j;
	printf("enter number of rows and columns");
	scanf("%d",&n);
	int a[n][n];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
if (i==0 || i==n-1 || j==0 || j==n-1)
printf("1 ");
else printf("0 ");
printf("\n");
}
	return 0;
}