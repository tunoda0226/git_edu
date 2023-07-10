#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(void){
    int i = 0;
    int c;

     srand(time(NULL)); 

    int b = rand() % 500 + 1; 
    while(b != c){
        printf("”‚ğ“ü—Í\n");
        scanf("%d" , &c); 
    
        if(b > c){
            printf("¬‚³‚­‚Ä‘\n");
        }
        if (b < c){
            printf("‘å‚«‚­‚Ä‘\n");
        }
      if(b == c)printf("‚¹‚¢‚©‚¢A‚¨‚ß‚Å‚Æ\n");
      i+=1;
    }
    printf("%d‰ñ–Ú‚Å¬Œ÷\n" , i);
    return 0;
}