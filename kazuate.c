#include<stdio.h>
#include<stdlib.h>
#include <time.h>
int main(void){
    int i = 0;
    int c;

     srand(time(NULL)); 

    int b = rand() % 500 + 1; 
    while(b != c){
        printf("�������\n");
        scanf("%d" , &c); 
    
        if(b > c){
            printf("�������đ�\n");
        }
        if (b < c){
            printf("�傫���đ�\n");
        }
      if(b == c)printf("���������A���߂ł�\n");
      i+=1;
    }
    printf("%d��ڂŐ���\n" , i);
    return 0;
}