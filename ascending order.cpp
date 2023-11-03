/*this program is to arrange array elements in ascending order*/
#include<stdio.h>
int main ()
{
	int i,n,j,t;
	printf("enter size of array");
	scanf("%d", &n);
	int a[n];
	printf("enter array elements");
	for (j=0; j<n;j++)
	scanf("%d", &a[j] );
for (i=0; i<n; i++)
{
	for(j=i+1; j<n;j++)
	if (a[i]>a[j])
	{
		t=a[i];
		a[i]=a[j];
		a[j]=t;
	}
}
for (j=0;j<n;j++)
printf(" %d", a[j]);

return 0;
}