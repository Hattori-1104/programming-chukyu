#include <stdio.h>

int main(void) {
    int i, j;
    int size = 9;
    for (i = 1; i <= size; i++) {
        for (j = 1; j <= size; j++) {
            printf("%2d ", i * j);
        }
        printf("\n");
    }
}