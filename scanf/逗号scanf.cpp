/**
 * scanf的
 * 逗号问题：逗号和别的字符一样，不是特殊字符
 * 空格问题：scanf和输入的空格都可以随便打。scanf不加空格，但输入要空格分隔区分。输入用回车代替空格。
 */ 

#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d,%d", &a, &b);
    printf("%d %d\n", a, b);

    scanf("%d   %d", &a, &b);
    printf("%d %d\n", a, b);

    scanf("%d%d", &a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
/**
3,4
3 4
1                     2
1 2
5
6
5 6
 */