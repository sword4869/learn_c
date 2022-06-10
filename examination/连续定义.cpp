/**
 * `int *p, m=5;`这样是可以的。不是`int*`绑定，从而m也得是指针，而是`*p`绑定，不影响m。
 * 
 * `int n`只是值随便，但地址已经是分配好的。
 */

#include <stdio.h>
int main()
{
    int *p, m=5;
    int n, *q=&n;
    return 0;
}