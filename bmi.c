
#include <stdio.h>

int main(void)
{
    float weight, height;
    printf("weight [kg] : ");
    scanf("%f", &weight);
    printf("height [cm] : ");
    scanf("%f", &height);
    height /= 100;
    float bmi = weight / (height * height);
    printf("BMI         : %.2f\n", bmi);
    return 0;
}
