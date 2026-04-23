#include <stdio.h>

int isUruuDoshi(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;
            }
            return 0;
        }
        return 1;
    }
}

int main(void) {
    int year;
    printf("年を入力：");
    scanf("%d", &year);
    
    if (isUruuDoshi(year)) printf("%d年はうるう年です。\n", year);
    else printf("%d年はうるう年ではありません。\n", year);

    return 0;
}