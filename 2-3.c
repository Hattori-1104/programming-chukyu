#include <stdio.h>

int main(void) {
    float weight, height;
    printf("weight [kg] : ");
    scanf("%f", &weight);
    printf("height [cm] : ");
    scanf("%f", &height);
    height /= 100;
    float bmi = weight / (height * height);
    printf("BMI         : %.2f\n", bmi);

    if (bmi < 18.5) printf("標準よりも低いです\n");
    if (18.5 <= bmi && bmi < 25.0) printf("標準範囲です\n");
    if (25.0 <= bmi) printf("標準よりも高いです\n");

    return 0;
}