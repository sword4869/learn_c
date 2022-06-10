/**
 * 结构体不能定义自身类型的成员，但是可以定义自身类型成员的指针，因为指针的大小是固定的，而自身成员大小，在未定义完成前是不确定的。
 */

#include <stdio.h>
int main(void)
{
    struct man
    {
        int a;
        struct man *p = NULL;
    } m = {1, NULL}, *p = &m;
    return 0;
}
