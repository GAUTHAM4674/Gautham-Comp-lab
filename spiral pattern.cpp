#include<stdio.h>
int main ()
{
	int i,n,p,q,r,s,k=1,t,u;
	printf("enter number of rows and columns");
	scanf("%d",&n);
	int a[n][n];
	for (i=0;i<(n+1)/2;i++)
	{
	
	for(p=i;p<n-i;p++)
	a[i][p]=k++;
	for(q=i+1;q<n-i;q++)
	a[q][n-i-1]=k++;
	for(r=n-i-2;r>=i;r--)
	a[n-i-1][r]=k++;
	for(s=n-i-2;s>i;s--)
	a[s][i] = k++;
}
{
	
	for(t=0;t<n;t++)
	{
	for(u=0;u<n;u++)
	printf(" %d",a[t][u]);
	printf("\n");
}
}
	return 0;
}