#include <stdio.h>

int main() {
    int mang[] = {1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int dodai = sizeof(mang) / sizeof(mang[0]);

    printf("Cac phan tu trong mang :\n");
    for (int i = 0; i < dodai; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n Do dai cua mang la : %d \n", dodai);

    return 0;
}
