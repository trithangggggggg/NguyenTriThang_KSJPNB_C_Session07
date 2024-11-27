#include <stdio.h>

int main() {
    
    int a[5] = {6, 7, 3, 5, 8};
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 != 0) {
            a[i] += 2;
        } else {
            a[i] += 3;
        }
    }

    printf("mang luc sau la :\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

