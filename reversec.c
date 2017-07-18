		
#include<stdio.h>
#include<string.h>
int main()
{
	char s[20],g[20];
	int l, i, j;
	printf("Enter a string : ");
	gets(s);
	g=strrev(s);
	l=strlen(g);
	for(i=0; i<l; i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||
		s[i]=='o' || s[i]=='u' || s[i]=='A' ||
		s[i]=='E' || s[i]=='I' || s[i]=='O' ||
		s[i]=='U')
		{
			for(j=i; j<l; j++)
			{
				s[j]=s[j+1];
			}
		l--;
		}
	}
	printf("After deleting the vowels, the string will be : %s",s);
	return 0;
}
