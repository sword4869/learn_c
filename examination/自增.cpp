/**
 * 困扰在于，`z = x++, y++;`的 z和y有没有关系？答案是没有。
 */ 


#include <stdio.h>
int main()
{
    int x, y, z;
    x = y = 1;
    z = x++, y++;
    printf("%d,%d,%d\n", x, y, z);
    return 0;
}
/**
2 2 1
*/

