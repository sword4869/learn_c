/**
 * 《define的动态变量》
 * 可以看到 define 可以用来作字符变量替换，十分的方便。
 * 比如，堆排序的父节点、左右孩子结点。
 * 
 * 注意括号问题，`#define N i+1`,`int a = N*2`，其实是`a = i + 1*2`
 */

#include <stdio.h>
#define LEFT (i-1)
#define DOUBLE_I (i*2)
int main()
{
    int i = 0;

    // 输出变量
    printf("%d\n", LEFT);

    for(int i = 0; i < 3; i++)
    {
        printf("%d ",DOUBLE_I);
    }
    return 0;
}
/**
-1
0 2 4
*/