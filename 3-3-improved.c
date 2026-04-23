#include <stdio.h>

int nCk(int n, int k);


int main(void) {
    int n, k;
    printf("nとkを入力してください：");
    scanf("%d %d", &n, &k);
    printf("nCk = %d\n", nCk(n, k));
    
    return 0;
}

int nCk(int n, int k) {
    int i;
    double temp = 1;
    for (i = 0; i < k; i++ ) {
        double nu = n - i;
        double de = i + 1;
        // printf("分子：%lf 分母：%lf\n", nu, de);
        double t = nu / de;
        // printf("t: %lf\n", t);
        temp *= t;
    }
    // printf("temp: %lf\n", temp);
    return (int)temp;
}