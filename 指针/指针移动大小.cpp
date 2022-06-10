/**
 * p+1的+1不是移动一个字节，而是移动一个存储单位大小，即p对应数组类型的类型字节数。
 *
 *
对于代码段`int a[10];`, 问下面不可以表示a[1]地址的是（）
正确答案: B   你的答案: 空 (错误)
A.&a[0] + 1
B.a + sizeof(int)
C.(int*)&a + 1
D.(int*)((char*)&a + sizeof(int))

(char *)&a将a的地址强制转换为char型指针,那么挪动单位变成char的一个字节，然后加上4相当于向后挪4个char的位置,,于是相当与一个int的位置，再强制转换为int型指针.
 */

#include <stdio.h>
int main()
{
    int a[10] = {3};
    printf("%d\n", &a[0] + 1);
    printf("%d\n", a + 1);
    printf("%d\n", (int *)&a + 1);
    printf("%d\n", (int *)((char *)&a + sizeof(int)));
    return 0;
}