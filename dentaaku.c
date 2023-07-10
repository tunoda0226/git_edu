#include<stdio.h>
#include <math.h>
int main(void){
    int num1;
    int num2;
    char enzansi;
    printf("”š‚ğ“ü—Í ”š‚Æ”š‚ÌŠÔ‚Í,‚Å‹æØ‚Á‚Ä‚­‚¾‚³‚¢");
    scanf("%d,%d" , &num1 , &num2);
    printf("‰‰Zq‚ğ“ü—Í\n");
    scanf(" %c" , &enzansi);
    int resurt1; resurt1 = num1 + num2;
    int resurt2; resurt2 = num1 - num2;
    int resurt3; resurt3 = num1 * num2;
    int resurt4; resurt4 = num1 / num2;  
    int resurt5; resurt5 = pow(num1 , num2);
    if(enzansi == '+')printf("Œ‹‰Ê:%d" , resurt1);
    if(enzansi == '-')printf("Œ‹‰Ê:%d" , resurt2);
    if(enzansi == '*')printf("Œ‹‰Ê:%d" , resurt3);
    if(enzansi == '/')printf("Œ‹‰Ê:%d" , resurt4);
    if(enzansi == '^')printf("Œ‹‰Ê:%d" , resurt5);
    
    return 0;
}
 
   