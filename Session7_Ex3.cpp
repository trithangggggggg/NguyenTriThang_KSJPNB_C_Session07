#include <stdio.h>

int main() {
    int mang[5] = {4, 2, 9, 18, 25};
    int sochan = 0;

    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            printf("%d ", mang[i]);
            sochan = 1;
        }
    }
    if (sochan = 0) {
        printf("Mang khong chua so chan.");
    }
    return 0;
}
