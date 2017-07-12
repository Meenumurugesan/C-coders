#include <stdio.h>
#include <math.h>
void sieve(int n1, int pri1[]);
int main()
{
    int i, n1 = 50; 
    int v1[n1];
    sieve(n1, v1);
    for (i=0;i<n1;i++)
        if (v1[i] == 1)
            printf("%d\n",i); 
}
void sieve(int n1, int pri1[])
{
    int i, j;
    for (i=0;i<n1;i++)
        pri1[i]=1; 
    pri1[0]=0,pri1[1]=0;
    for (i=2;i<sqrt(n1);i++) 
        for (j=i*i;j<n1;j+=i) 
            pri1[j] = 0;
}
