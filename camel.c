#include <stdio.h> 
int main() 
{
    char a[100];
    int f1, i, l1;
 
    printf("Enter the sentence \n");
    gets(a);
    
    for(l1=0; l1<a[l1]!='\0'; l1++);

    if(a[0] >='a' && a[0]<='z') {  

        a[0] = a[0]  - 32;
    }
    for(i=1; i<l1; i++) {
        if(a[i] == ' '){
            if(a[i+1] >='a' && a[i+1]<='z'){
            int j = i + 1;
            a[j] = a[j] - 32;
            }
        }
    }
    printf("%s",a);
    return 0;
}
