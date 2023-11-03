/*this program is to arrange array elements in ascending order*/
#include<stdio.h>
int main ()
{
	int i,n, j,t;
	int a[n];
	printf("enter size of array");
	scanf("%d", &n);
	printf("enter array elements");
	for (j=0; j<n;j++)
	scanf("%d", &a[j] );
for (i=0; i<n-1; i++)
{
	for(j=0; j<n-i-1;j++)
	{
	
	if (a[j]>a[j+1])
	{
		t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
	}
}
}
for(j=0;j<n;j++)
printf("%d", a[j]);
return 0;
}

