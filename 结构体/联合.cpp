/**
共用体：
- 共用体变量d与共用体变量的各成员的地址，都相同。
- 共用体只能存在一个值
 */
#include <stdio.h>
int main()
{

    union d
    {
        int d1;
        float d2;
    } d;
    d.d1 = 10, d.d2 = 3;
    printf("%d %f\n", d.d1, d.d2);
    printf("%x %x %x\n", &d.d1, &d.d2, &d);
    return 0;
}
/**
1077936128 3.000000
61fe1c 61fe1c 61fe1c
 */ 