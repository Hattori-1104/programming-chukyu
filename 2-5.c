// 月の季節を出力するプログラム（プログラム2-8）
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){
    char tmp = 0;
    printf("該当する月の記号（a,b,c,d）を入力してください．\n");
    printf("a:3～5月，b:6～8月，c:9～11月，d:12～2月\n");
    printf(">>");
    scanf("%c", &tmp);

    switch(tmp)
    {
        case 'a':
            printf("季節は春です．\n");
            break;
        case 'b':
            printf("季節は夏です．\n");
            break;
        case 'c':
            printf("季節は秋です．\n");
            break;
        case 'd':
            printf("季節は冬です．\n");
            break;
        default:
            printf("記号の入力が間違っています．\n");
            break;
    }

    return 0;
}
