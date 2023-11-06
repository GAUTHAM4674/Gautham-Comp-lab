/*this program is to check if a given string is a palindrome or not*/
#include<stdio.h>
int main ()
{
	char ch[1000];
	char s[1000];
	int i,j,l=0,t,k=0;
	printf("enter string1");
	scanf("%s", ch);
	for(i=0;ch[i]!='\0';i++)
	s[i]=ch[i];
	for(i=0;ch[i]!='\0';i++)
	l=l+1;
	for(i=0;i<l/2;i++)
	{
		t=ch[i];
	ch[i]=ch[l-i-1];
	ch[l-i-1]=t;
}
	for(i=0;ch[i]!='\0';i++)
	if(ch[i]!=s[i])
	{
	printf("the given string is not palindrome");
	k=k+1;
	break;
}
	if (k==0)
	printf("the given string is a palindrome");
	return 0;
}
