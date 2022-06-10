/**
 * 修改指针和指向的值，都互相影响。尤其是，先指向后修改指针的值。这样是可以的。
 * `scanf("%d", p);`，而不是`scanf("%d", &p);`
 */

#include <stdio.h>
int main()
{
    int m = 5, *p = &m;
    printf("%d %d\n", m, *p);
    scanf("%d", p);
    printf("%d %d\n", m, *p);
    scanf("%d", &m);
    printf("%d %d\n", m, *p);
    return 0;
}
/**
5 5
3
3 3
4
4 4
*/