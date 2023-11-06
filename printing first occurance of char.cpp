/*this program is to reverse a string without using string functions*/
#include<stdio.h>
int main ()
{
	char ch[1000];
	char c;
	int i;
	printf("enter string1");
	scanf("%s", ch);
	printf("enter character to be found");
	scanf("%s", &c);
	for(i=0;ch[i]!='\0';i++)
if (ch[i]==c)
{
printf("%d",i);
break;
}
	return 0;
}
