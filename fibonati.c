#include <stdio.h>

int main() {
    int onakaasuita;
    printf("���Ԃ܂ł̃t�B�{�i�b�`��������߂��܂����H: ");
    scanf("%d", &onakaasuita);

    int kusa[onakaasuita];
    kusa[0] = 0;
    kusa[1] = 1;

    printf("�t�B�{�i�b�`����: %d, %d, ", kusa[0], kusa[1]);

    for (int i = 2; i < onakaasuita; i++) {
        kusa[i] = kusa[i-1] + kusa[i-2];
        printf("%d,", kusa[i]);
    }

    return 0;
}