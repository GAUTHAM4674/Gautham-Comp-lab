/*this program is to find sum of all digits of a number*/
#include<stdio.h>
int main ()
{
	int n ,i, s;
	s=0; 
	printf("enter a number");
	scanf("%d", &n);
while (n>0)
{
	i=n%10;
	s=s+i;
	n=n/10;
}
printf("The sum of all digits is %d",s);
	return 0;
}
