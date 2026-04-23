#include <stdio.h>

int main(void) {
    char code;
    
    printf("学部コード（アルファベット）を入力してください：");
    scanf("%c", &code);

    switch (code)
    {
    case 'A':
        printf("政治経済学部\n");
        break;
    case 'B':
        printf("法学部\n");
        break;
    case 'E':
        printf("教育学部\n");
        break;
    case 'F':
        printf("商学部\n");
        break;
    case 'H':
        printf("社会科学部\n");
        break;
    case 'J':
        printf("人間科学部\n");
        break;;
    case 'K':
        printf("スポーツ科学部\n");
        break;
    case 'M':
        printf("国際教養学部\n");
        break;
    case 'T':
        printf("文化構想学部\n");
        break;
    case 'U':
        printf("文学部\n");
        break;
    case 'W':
        printf("基幹理工学部\n");
        break;
    case 'X':
        printf("創造理工学部\n");
        break;
    case 'Y':
        printf("先進理工学部\n");
        break;
    default:
        printf("該当する学部がありません。\n");
        break;
    }
    return 0;
}