#include <stdio.h>
#include <string.h>


union A
{
    int a;
    char b;
};

int main02(void)
{

    union A a;
    a.a = 0x12345620;
    a.b = 2;

    printf("&a.a = %p, &a.b = %p\n", &a.a, &a.b);
    printf("a.a = %x, a.b = %x\n", a.a, a.b);
    return 0;
}
