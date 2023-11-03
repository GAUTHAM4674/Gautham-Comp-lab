/*this program is to find length of a number*/
#include<stdio.h>
int main ()
{
	int n ,i;
	i=0; 
	printf("enter a number");
	scanf("%d", &n);
	while(n!=0)
	{
		n=n/10;
		i++;
	}
	printf("The length of number is %d",i);;
	return 0;
}
