#include <stdio.h>

int main() {
    printf("P2\n");
    printf("256 256\n");
    printf("255\n");

    for (int i = 0; i < 256; i++) {
        for (int j = 0; j < 256; j++) {
            printf("%d ", (i + j) / 2);
        }
        printf("\n");
    }

    return 0;
}
