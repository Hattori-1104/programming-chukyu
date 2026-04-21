#include <stdio.h>

int main(void) {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float average = (a + b + c) / 3.0f;
    printf("Average: %.2f\n", average);
    return 0;
}