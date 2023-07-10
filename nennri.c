#include<stdio.h>
int main(void){
    int nenri;
    int syoki;
    int jogen;
    int kinri;
    int syoki2;
    int syoki3;
    int syok2 = 0;
    printf("年利(%%)をおしえてね");
    scanf("%d" , &nenri);
    printf("初期値と上限値をおしえてね(カンマ入れてね)");
    scanf("%d,%d" , &syoki , &jogen);
     kinri = nenri / 100;
    int i;
    for(i=0 ; syoki2 < jogen ; i++){
   
    syoki2 = i * (syoki * kinri) + syoki;}
    printf("年利:%d\n" , nenri);
    printf("初期値:%d\n" , syoki);
    printf("上限値%d\n" , jogen);
    printf("かかった年:%d\n" , i);
    return 0;

}