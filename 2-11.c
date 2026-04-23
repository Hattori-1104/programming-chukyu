#include <stdio.h>

int main(void) {
    int n = 365;
    int guess;
    do {
        printf("数値を予想してください：");
        scanf("%d", &guess);
        if (guess > n) printf("正解より大きいです。\n");
        else if (guess < n) printf("正解より小さいです。\n");
        else printf("正解です。\nn = %d\n", n);
    } while (guess != n);

    return 0;
}