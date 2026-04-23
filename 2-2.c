#include <stdio.h>

int main(void) {
    int s;
    printf("秒数を入力：");
    scanf("%d", &s);

    int seconds = s % 60;
    s /= 60;
    int minutes = s % 60;
    s /= 60;
    int hours = s % 24;
    s /= 24;
    int day = s;
    if (day > 0) printf("%d日", day);
    if (hours > 0) printf("%d時間", hours);
    if (minutes > 0) printf("%d分", minutes);
    if (seconds > 0) printf("%d秒", seconds);

    printf("\n");

    return 0;
}