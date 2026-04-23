#include <stdio.h>

int main(void) {
    int bit[8];
    int n;
    printf("数値を0〜255の範囲で入力してください：");
    scanf("%d", &n);

    int i;
    for (i = 0; i < 8; i++ ) {
        bit[i] = n % 2;
        n /= 2;
    }
    for (i = 0; i < 8; i++ ) {
        printf("%d", bit[7 - i]);
    }
    printf("\n");
    
    return 0;
}