#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(void){
    int i = 0;
    int c;

     srand(time(NULL)); 

    int b = rand() % 500 + 1; 
    while(b != c){
        printf("数を入力\n");
        scanf("%d" , &c); 
    
        if(b > c){
            printf("小さくて草\n");
        }
        if (b < c){
            printf("大きくて草\n");
        }
      if(b == c)printf("せいかい、おめでと\n");
      i+=1;
    }
    printf("%d回目で成功\n" , i);
    return 0;
}