#include <stdio.h>

int main(void) 
{
	int n,rem,new,rev=0,a; 
	printf("Enter the number to be reversed");
	scanf("%d",&a);
	n=a;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("The reversed number%d",rev);
	
	return 0;
}
