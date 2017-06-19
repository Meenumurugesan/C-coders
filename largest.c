#include <stdio.h>

int main(void)
{
	int a=10,b=5,c=6;
	scanf("%d%d%d",a,b,c);
	if(a>b&&a>c)
	printf("a is %d",a);
	else if(b>c&&b>a)
	printf("b is %d",b);
	else if(c>a&&c>b)
	printf("c is %d",c);
	return 0;
}
