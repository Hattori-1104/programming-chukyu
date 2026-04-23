#include <stdio.h>

const double PI = 3.14;

int main(void) {
    double r;
    printf("円の半径を入力：");
    scanf("%lf", &r);
    printf("\n");
    printf("半径　：%8.3f\n", r);

    double area = r * r * PI;
    double volume = (4.0 / 3.0) * r * r * r * PI;
    printf("表面積：%8.3f\n", area);
    printf("体積　：%8.3f\n", volume);
    
    return 0;
}