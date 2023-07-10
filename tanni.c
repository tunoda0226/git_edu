#include <stdio.h>

int main(void) {
    int chuukan;
    int teiki;
    int kadai;
    int manten1;
    int manten2;
    int manten3;
    int tensuu1;
    int tensuu2;
    int tensuu3;
    int A1;
    int B1;
    int C1;
    int hyouka1;
    int hyouka2;
    int hyouka3;
    int hantei;
    char A2 = 'A';
    char B2 = 'B';
    char C2 = 'C';

    printf("課題、中間、定期の評価割合を入力してね（カンマで区切ってね）: ");
    scanf("%d,%d,%d", &kadai, &chuukan, &teiki);

    printf("それぞれの満点の点数を入力してね（カンマで区切ってね）: ");
    scanf("%d,%d,%d", &manten3, &manten1, &manten2);

    printf("それぞれの獲得した点数を入力してね（カンマで区切っ）: ");
    scanf("%d,%d,%d", &tensuu3, &tensuu1, &tensuu2);

    printf("A, B, C, の基準値を入力してね（カンマで区切ってね）: ");
    scanf("%d,%d,%d", &A1, &B1, &C1);

    hyouka1 = (tensuu1 * 100) / manten1 * chuukan / 100;
    hyouka2 = (tensuu2 * 100) / manten2 * teiki / 100;
    hyouka3 = (tensuu3 * 100) / manten3 * kadai / 100;
    hantei = hyouka1 + hyouka2 + hyouka3;

    if (hantei >= A1) {
        printf("単位: %c\n", A2);
    }
    else if (hantei >= B1) {
        printf("単位: %c\n", B2);
    }
    else if (hantei >= C1) {
        printf("単位: %c\n", C2);
    }
    else {
        printf("単位: F\n");
    }

    return 0;
}