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

    printf("�ۑ�A���ԁA����̕]����������͂��Ăˁi�J���}�ŋ�؂��Ăˁj: ");
    scanf("%d,%d,%d", &kadai, &chuukan, &teiki);

    printf("���ꂼ��̖��_�̓_������͂��Ăˁi�J���}�ŋ�؂��Ăˁj: ");
    scanf("%d,%d,%d", &manten3, &manten1, &manten2);

    printf("���ꂼ��̊l�������_������͂��Ăˁi�J���}�ŋ�؂��j: ");
    scanf("%d,%d,%d", &tensuu3, &tensuu1, &tensuu2);

    printf("A, B, C, �̊�l����͂��Ăˁi�J���}�ŋ�؂��Ăˁj: ");
    scanf("%d,%d,%d", &A1, &B1, &C1);

    hyouka1 = (tensuu1 * 100) / manten1 * chuukan / 100;
    hyouka2 = (tensuu2 * 100) / manten2 * teiki / 100;
    hyouka3 = (tensuu3 * 100) / manten3 * kadai / 100;
    hantei = hyouka1 + hyouka2 + hyouka3;

    if (hantei >= A1) {
        printf("�P��: %c\n", A2);
    }
    else if (hantei >= B1) {
        printf("�P��: %c\n", B2);
    }
    else if (hantei >= C1) {
        printf("�P��: %c\n", C2);
    }
    else {
        printf("�P��: F\n");
    }

    return 0;
}