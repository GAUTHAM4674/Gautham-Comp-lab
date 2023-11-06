/*this program is to reverse a string without using string functions*/
#include<stdio.h>
int main ()
{
	char ch[1000];
	char s[1000];
	int i,j,l=0,t;
	printf("enter string1");
	scanf("%s", ch);
	for(i=0;ch[i]!='\0';i++)
	l=l+1;
	for(i=0;i<l/2;i++)
	{
		t=ch[i];
	ch[i]=ch[l-i-1];
	ch[l-i-1]=t;
}
	printf("%s",ch);
	return 0;
}
