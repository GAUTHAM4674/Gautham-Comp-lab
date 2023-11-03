/*this program is to check if a number is a palindrome or not*/
#include<stdio.h>
#include<math.h>
int main ()
{
	int v, n ,i,m,r,t;
	printf("enter a number");
	scanf("%d", &m);
	m=v;
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
if (r==v)
printf("the number is a palindrome");
else printf("the number is not a palindrome");
	return 0;
}
