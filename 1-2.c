#include <stdio.h>

int main(void)
{
    char c_num = 42;
    short int s = 12345;
    int i = 123456789;
    long int l = 1234567890123456789L;
    long long int ll = 12345678901234567890ULL;
    float f = 3.14f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238462643383279L;
    char c_string = 'A';

    printf("char: %d bytes\n", sizeof(c_num));
    printf("short int: %d bytes\n", sizeof(s));
    printf("int: %d bytes\n", sizeof(i));
    printf("long int: %d bytes\n", sizeof(l));
    printf("long long int: %d bytes\n", sizeof(ll));
    printf("float: %d bytes\n", sizeof(f));
    printf("double: %d bytes\n", sizeof(d));
    printf("long double: %d bytes\n", sizeof(ld));
    printf("char string: %d bytes\n", sizeof(c_string));

    return 0;
}