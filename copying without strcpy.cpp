/*this program is to copy one string to another without strcpy*/
#include<stdio.h>
int main ()
{
	char ch[1000];
	char s[1000];
	int l=0,i;
	printf("enter string");
	scanf("%s", ch);
	for(i=0;ch[i]!='\0';i++)
	s[i]=ch[i];
	printf("%s",s);
	return 0;
}
