#include <stdio.h>

int distance(int a, int b);

int main(void) {
    int a, b;
    printf("２つの実数を入力してください。");
    scanf("%d %d", &a, &b);
    printf("距離：%d\n", distance(a, b));
    
    return 0;
}

int distance(int a, int b) {
    int temp = a - b;
    if (temp < 0) temp = 0 - temp;
    return temp;
}