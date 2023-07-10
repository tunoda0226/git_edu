#include <stdio.h>

int main() {
    int onakaasuita;
    printf("何番までのフィボナッチ数列をしめしますか？: ");
    scanf("%d", &onakaasuita);

    int kusa[onakaasuita];
    kusa[0] = 0;
    kusa[1] = 1;

    printf("フィボナッチ数列: %d, %d, ", kusa[0], kusa[1]);

    for (int i = 2; i < onakaasuita; i++) {
        kusa[i] = kusa[i-1] + kusa[i-2];
        printf("%d,", kusa[i]);
    }

    return 0;
}