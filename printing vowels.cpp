/*this program is to reverse a string without using string functions*/
#include<stdio.h>
int main ()
{
	char ch[1000];
	char c;
	int i;
	printf("enter string1");
	scanf("%s", ch);
	for(i=0;ch[i]!='\0';i++)
	{
if (ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
printf("%c",ch[i]);
}
	return 0;
}
