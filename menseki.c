#include<stdio.h>
int main(void){
    int nani;
    int teihen;
    int takasa;
    int joutei;
    int katei;
    int re;
    int hankei;
    int kakudo;
    printf("1�O�p�` 2�����` 3��` 4���s�l�ӌ` 5�~ 6��\n");
    printf("�ǂ�H\n");
    scanf("%d" , &nani);
        printf("��ӁA�����A���A����A���a�A�p�x�����\n");
    scanf("%d,%d,%d,%d,%d,%d" , &teihen,&takasa,&joutei,&katei,&hankei,&kakudo);
    if(nani == 1)re = teihen * takasa / 2;
    if(nani == 2)re = teihen * takasa;
    if(nani == 3)re = (joutei + katei) * takasa /2;
    if(nani == 4)re = teihen * takasa;
    if(nani == 5)re = hankei * hankei * 3;
    if(nani == 6)re = hankei * hankei * 3 * kakudo/360;
    printf("%d\n" , re);


}