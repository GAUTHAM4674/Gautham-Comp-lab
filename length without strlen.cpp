/*this program is to find legnth of string without strlen*/
#include<stdio.h>
int main ()
{
	char ch[1000];
	int l=0,i;
	printf("enter string");
	scanf("%s", ch);
	for(i=0;ch[i]!='\0';i++)
	l=l+1;
	printf("the length of the string is %d",l);
	return 0;
}
