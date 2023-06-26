#include<stdio.h>
    int main(void){
        int kami;
        scanf("%d" , &kami);
        int i;
        for(i=0 ; i!=kami ; i++){
            int as;
            as = kami * i;
            printf("%2d\5n" , as);
        }
        return 0;
    }