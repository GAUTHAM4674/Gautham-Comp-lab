/*this program is to find the max,min and avg in an array*/
#include<stdio.h>
int main ()
{
	int i,n, max, min, s, avg;
	s=0;
	int a[n];
	printf("enter size of array");
	scanf("%d", &n);
	printf("enter array elements");
	for (i=0; i<n;i++)
	scanf("%d", &a[i] );
min=max=a[0];
for (i=1;i<n;i++)
{
	if (a[i]>max)
	max=a[i];
	}	
	for (i=1; i<n; i++)
	if (a[i]<min)
	min=a[i];
	for(i=0;i<n; i++)
	s=s+a[i];
avg=s/n;
printf("the max and min and avg are %d %d %d resepctively",max ,min, avg);
return 0;
}

