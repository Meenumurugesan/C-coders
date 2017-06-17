include <stdio.h> 
int main()
{
    int n;     
    printf("Enter any number: ");
    scanf("%d", &n);     
    if(n > 0)
    {
        printf("Number is positive");
    }
    else if(n < 0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is zero");
    } 
    return 0;
} 
