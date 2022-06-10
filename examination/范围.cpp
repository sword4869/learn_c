/**
 * 困扰在于，if else 块算不算一个语句范围？答案是算。
 */

#include <stdio.h>
int main()
{
    int x = -3, y = 0;
    if (x >= 0)
        if (x > 0)
            y = 1;
        else
            y = -1;
    printf("%d", y);
    return 0;
}
/**
0
*/
