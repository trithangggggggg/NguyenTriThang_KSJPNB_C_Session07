#include <stdio.h>

int main() {
    int mang[5];
    int i;
    printf("Nhap 5 phan tu cua mang:\n");
    for (i = 0; i < 5; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("Cac phan tu trong mang la:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", mang[i]);
    }
    return 0;
}
