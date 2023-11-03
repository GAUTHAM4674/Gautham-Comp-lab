/*this program is to arrange elements in ascending order*/
#include<stdio.h>
int main ()
{
	int i,n, j,t;
	int a[n];
	printf("enter size of array");
	scanf("%d", &n);
	printf("enter array elements");
	for (i=0; i<n;i++)
	scanf("%d", &a[i] );
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if (a[i]>a[j])
		{
			t= a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
}
