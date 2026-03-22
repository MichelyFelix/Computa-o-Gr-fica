#include <stdio.h>

int main() {
    printf("P1\n");
    printf("256 256\n");

    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < 256; j++) {
            if (i % 2 == 0 && j % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}