#include<stdio.h>
#include <math.h>
int main(void){
    int num1;
    int num2;
    char enzansi;
    printf("��������� �����Ɛ����̊Ԃ�,�ŋ�؂��Ă�������");
    scanf("%d,%d" , &num1 , &num2);
    printf("���Z�q�����\n");
    scanf(" %c" , &enzansi);
    int resurt1; resurt1 = num1 + num2;
    int resurt2; resurt2 = num1 - num2;
    int resurt3; resurt3 = num1 * num2;
    int resurt4; resurt4 = num1 / num2;  
    int resurt5; resurt5 = pow(num1 , num2);
    if(enzansi == '+')printf("����:%d" , resurt1);
    if(enzansi == '-')printf("����:%d" , resurt2);
    if(enzansi == '*')printf("����:%d" , resurt3);
    if(enzansi == '/')printf("����:%d" , resurt4);
    if(enzansi == '^')printf("����:%d" , resurt5);
    
    return 0;
}
 
   