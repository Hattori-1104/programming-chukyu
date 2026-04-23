#include <stdio.h>

int main(void) {
    int n = 0;
    int count = 0;
    int i = 1;
    while (n <= 1000) {
        n += i;
        i++;
        count++;
    }
    printf("反復回数：%d回\nn = %d\nnは1000を超えました。\n", count, n);
    return 0;
}