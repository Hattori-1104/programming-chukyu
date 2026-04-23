#include <stdio.h>

int factorial(int n);
int nCk(int n, int k);

int main(void) {
    int n, k;
    printf("nとkを入力してください：");
    scanf("%d %d", &n, &k);
    printf("nCk = %d\n", nCk(n, k));
    return 0;
}

int nCk(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int factorial(int n) {
    int temp = 1;
    int i;

    for (i = 1; i <= n; i++ ) {
        temp *= i;
    }
    return temp;
}