#include<stdio.h>
int main(void){
    int nenri;
    int syoki;
    int jogen;
    int kinri;
    int syoki2;
    int syoki3;
    int syok2 = 0;
    printf("�N��(%%)���������Ă�");
    scanf("%d" , &nenri);
    printf("�����l�Ə���l���������Ă�(�J���}����Ă�)");
    scanf("%d,%d" , &syoki , &jogen);
     kinri = nenri / 100;
    int i;
    for(i=0 ; syoki2 < jogen ; i++){
   
    syoki2 = i * (syoki * kinri) + syoki;}
    printf("�N��:%d\n" , nenri);
    printf("�����l:%d\n" , syoki);
    printf("����l%d\n" , jogen);
    printf("���������N:%d\n" , i);
    return 0;

}