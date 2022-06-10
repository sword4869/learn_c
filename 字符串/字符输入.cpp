/**
 * `c - '2'`。ascii码相减。输入`3`，结果就是3-2=`1`.
 * `int getchar()`分单个字符，输入`33`，结果就是分两次的3-2=`1`,3-2=`1`。
 * `(c = getchar()) != '\n'`，`int getchar()`返回int值，所以比较的是ascii码值。
 * `putchar(int c)`，`<stdio.h>`库函数，输出对应ascii码值对应的字符。
 */

#include <stdio.h>
int main()
{
    int c;
    while ((c = getchar()) != '\n'){
        switch (c - '2')
        {
        case 0:
        case 1:
            putchar(c + 4);
        case 2:
            putchar(c + 4);
            break;
        case 3:
            putchar(c + 3);
        default:
            putchar(c + 2);
            break;
        }
    }
    printf("\n");
    return 0;
}
/**
【输入】
446755
【输出】
88898787
*/