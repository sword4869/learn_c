/**
 * int转char：
 * 可以这样类型转化来使用，`char a = 0;`对应ascii码0值' '。
 * 但注意char的范围，[-128,127]，超出127回归-128
 * 
 * char转int：`int k = '1';`
 * 
 return后面括号里的表达式的值即是此函数的值。请问这句话的说法是正确的吗？
错误，函数返回时会根据定义的返回类型对返回值进行强制类型转换
 */

#include <stdio.h>
int main()
{
    char a;
    for (a = 0; a < 5; a += 1)
    {
    }

    for (int i = 126; i < 130; i++)
    {
        char a = i;
        printf("[%c][%d]\n", a, a);
    }

    int k = '1';
    printf("%d\n", k);

    int num['10'];  // 12592 ，而且 int num["10"]不行

    return 0;
}
/**
[~][126]
[][127]
[€][-128]
[乚[-127]
49
 */