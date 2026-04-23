#include <stdio.h>

int main(void) {
    int data[] = {11, 15, 8, 6, 25, 19, 45, 34, 20, 10};

    int sum = 0;
    int length = sizeof(data) / sizeof(data[0]);
    int i;
    for (i = 0; i < length; i++ ) {
        sum += data[i];
    }

    printf("合計値は%d\n", sum);
    return 0;
}