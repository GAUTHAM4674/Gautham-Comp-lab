/*this program is to find reverse of a number*/
#include<stdio.h>
#include<math.h>
int main ()
{
	int n ,i,m,r,t;
	printf("enter a number");
	scanf("%d", &m);
	r=0;
	i=0;
	n=m;
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	for(i=--i;m>0;i--)
	{
		t=m%10;
		r=r+t*pow(10,i);
		m=m/10;
	}
	printf("Reverse of the number is %d",r);
	return 0;
}
