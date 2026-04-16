#include <stdio.h>

int main(void)
{
    int a, b;
    int success = 0;
    while (!success)
    {
        printf("===\nA : ");
        auto re = scanf("%d", &a);
        if (re == 1)
        {
            success = 1;
        }
        else
        {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n')
                ;
        }
    }
    success = 0;
    while (!success)
    {
        printf("===\nB : ");
        auto re2 = scanf("%d", &b);
        if (re2 == 1)
        {
            success = 1;
        }
        else
        {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n')
                ;
        }
    }
    printf("===\n%d vs %d\n", a, b);
    if (a > b)
    {
        printf("%d", a);
    }

    else if (a < b)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d = %d", a, b);
    }
    printf("\n");
}