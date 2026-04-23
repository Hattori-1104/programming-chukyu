#include <stdio.h>

int main(void) {
    int data[] = {15, 7, 32, 4, 18, 55, 9, 41, 23, 6};
    int find;
    printf("見つける数字：");
    scanf("%d", &find);
    int i;
    int flag = 0;
    int foundIndex;
    for (i = 0; i < 10; i++ ) {
        if (data[i] == find) {
            foundIndex = i;
            flag = 1;
            break;
        }
    }
    if (flag) printf("見つかりました（data[%d] = %d）\n", foundIndex, find);
    else printf("見つかりませんでした\n");

    return 0;
}