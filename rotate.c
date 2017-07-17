#include <stdio.h>
 


void sAOP(int *ar, int s) {
    int i, t;
    
    t = ar[0];
 
    for(i = 0; i < s-1; i++) {
        ar[i] = ar[i+1];
    }
      
    ar[i] = t;
}
 

void rA(int *ar, int s, int N){
    int i;
    for(i = 0; i < N; i++){
        sAOP(ar, s);
    }
    return;
}
 
int main(){
    int ar[10] = {0,1,2,3,4,5,6,7,8,9}; 
    int i;
  
    printf("Original Array\n");
    for(i = 0; i<10; i++){
        printf("%d ", ar[i]);
    } 
    rA(ar, 10, 5);
  
    printf("\nRotated Array\n");
    for(i = 0; i<10; i++){
        printf("%d ", ar[i]);
    }
 
    return 0;
}
