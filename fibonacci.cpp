/*this program is to find nth fibonacci number*/
#include<stdio.h>
int main ()
{
	int a=0, b=1, s, n, i;
	printf("enter a number");
	scanf("%d", &n);
	printf("%d %d", a,b);
	for (i=2;i<n; i++)
	{
	s=a+b;
	a=b;
	b=s;
	printf("%d",s);
	}
	return 0;
}
