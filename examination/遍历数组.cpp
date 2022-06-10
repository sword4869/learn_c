/**
 * 下列程序段的功能是给数组所有的元素输入数据
 * INPUT：
 * `&a[i++]`。少了`&`就不对。
 * `a+(i++)`。其实`a+i`就是`&a[i]`
 */

#include <stdio.h>
#define size 3
#define INPUT a + (i++)
#define OUTPUT
int main()
{
    int a[size];
    int i = 0;
    while (i < size)
        scanf("%d", INPUT);

    /*---------------------------------------------------------*/

    for (int i = 0; i < size; i++)
        printf("%4d", a[i]);

    
    for (int *p = a; p < (a + size); p++) 
    {
        printf("%4d", *p);
    }
    // 也可以写成 int *p = &n[0]; p < &n[4]

    int *q = a;
    for (int i = 0; i < size; i++)
        printf("%4d", *q++);
    // *px++或*(px++)，*++px或*(++px)。(*px)++，++(*px)或++*px1
    return 0;
}