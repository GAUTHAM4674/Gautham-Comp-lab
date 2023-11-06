/*this program is to concat two strings without using strncat*/
#include<stdio.h>
int main ()
{
	char ch[1000];
	char s[1000];
	int i,j;
	printf("enter string1");
	scanf("%s", ch);
	printf("enter string 2");
	scanf("%s",s);
	for(i=0;ch[i]!='\0';i++)
	ch[i]=ch[i];
	for(j=0;s[j]!='\0';j++,i++)
	{
	ch[i]=s[j];
}
	ch[i]='\0';
	printf("%s",ch);
	return 0;
}
