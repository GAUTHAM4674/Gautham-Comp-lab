/*this program is to print butterfly pattern*/
#include<stdio.h>
int main()
{
	int i,j,k,l,n;
	printf("enter number of rows");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{	
	printf("*");
	printf("\n");
}
	for(k=0;k<2*n-2*i-2;k++)
	{
	
	printf(" ");
printf("\n");
}
	for(l=0;l<n;l++)
	{
	printf("*");
	printf("\n");
}
}
return 0;

}