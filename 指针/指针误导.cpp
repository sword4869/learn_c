/**
 * `*p = p[2];`，不是获得c[2]，而是p+2，若p是c[1]，那么就是c[3]。
 */ 

#include <stdio.h>
void point(int *p) { *p = p[2]; }
int main()
{
    int c[] = {1, 2, 3, 4, 5}, *p = c;
    point(p + 1);
    for (; p < c + 5;)
        printf("%d ", *p++);
    return 0;
}
/**
1 4 3 4 5
 */ 