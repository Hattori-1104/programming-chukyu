#include <stdio.h>

int main(void) {
    int size = 5;
    int x, y;
    for (y = 0; y < size; y++ ) {
        for (x = 0; x <= y; x++ ) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}