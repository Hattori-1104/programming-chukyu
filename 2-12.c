#include <stdio.h>

int main(void) {
    int n = 0;
    int count = 0;
    int i;
    for (i = 1; i <= 1000; i++ ) {
        n += i;
        count++;
        if (n >= 1000) break;
    }
    printf("反復回数：%d回\nn = %d\nnは1000を超えました。\n", count, n);
    return 0;
}