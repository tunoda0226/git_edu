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
    printf("1三角形 2長方形 3台形 4平行四辺形 5円 6扇\n");
    printf("どれ？\n");
    scanf("%d" , &nani);
        printf("底辺、高さ、上底、下底、半径、角度を入力\n");
    scanf("%d,%d,%d,%d,%d,%d" , &teihen,&takasa,&joutei,&katei,&hankei,&kakudo);
    if(nani == 1)re = teihen * takasa / 2;
    if(nani == 2)re = teihen * takasa;
    if(nani == 3)re = (joutei + katei) * takasa /2;
    if(nani == 4)re = teihen * takasa;
    if(nani == 5)re = hankei * hankei * 3;
    if(nani == 6)re = hankei * hankei * 3 * kakudo/360;
    printf("%d\n" , re);


}