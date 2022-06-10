/**
 * scanf可以指定长度不能指定精度。
 * `scanf("%.2lf", &b);`，不行的。
 */

#include <stdio.h>
int main()
{
    int a;
    scanf("%4d", &a);
    printf("%d\n", a);
    return 0;
}
/**
4
4

0004
4

12345
1234

0000004
0
 */