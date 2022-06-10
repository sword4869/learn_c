/**
 * 结构体不能定义自身类型的成员，但是可以定义自身类型成员的指针，因为指针的大小是固定的，而自身成员大小，在未定义完成前是不确定的。
 */

#include <stdio.h>
#include <string.h>

void union_struct()
{

    union X
    {
        int x;
        char y[4];
    };
    X a;
    a.x = 0x11223344;
    // 0x 11 22 33 44
    printf("%x %x %x\n", a.x, a.y[0], a.y[1]);
}

int main(void)
{
    // union_struct();

    struct man
    {
        int a;
        struct man *p = NULL;
    } m = {1, NULL}, *p = &m;

    printf("%d\n", (*p).a);

    return 0;
}
