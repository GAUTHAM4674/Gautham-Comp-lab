/*this program is to check if a given string is a palindrome or not*/
#include<stdio.h>
int main ()
{
	char ch[1000];
	char s[1000];
	int i,j,l=0,t,k=0;
	printf("enter string1");
	scanf("%s", ch);
	printf("enter string2");
	scanf("%s",s);
	for(i=0;ch[i]!='\0';i++)
	if(ch[i]!=s[i])
	{
	printf("the given strings are not equal");
	k=k+1;
	break;
}
	if (k==0)
	printf("the given strings are equal");
	return 0;
}
