include<stdio.h>
#include<string.h>

int dvalue(char);

int main(){

    char rber[1000];
    int i=0;
    long int number =0;
   
    printf("Enter any roman number (Valid digits are I, V, X, L, C, D, M):  \n");
    scanf("%s",rber);
   
    while(rber[i]){
        
         if(dvalue(rber[i]) < 0){
             printf("Invalid roman digit : %c",rber[i]);
             return 0;
         }
            
         if((strlen(rber) -i) > 2){
             if(dvalue(rber[i]) < dvalue(rber[i+2])){
                 printf("Invalid roman number");
                 return 0;
             }
         }

         if(dvalue(rber[i]) >= dvalue(rber[i+1]))
             number = number + dvalue(rber[i]);
         else{
             number = number + (dvalue(rber[i+1]) - dvalue(rber[i]));
             i++;
         }
         i++;
    }
        
    printf("Its decimal value is : %ld",number);
   
    return 0;

}

int dvalue(char c){

    int value=0;

    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break;
         default: value = -1; 
    }

    return value;
}
