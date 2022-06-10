/**
以下选项中合法的字符常量是（        ）
正确答案: B   你的答案: D (错误)
A.'ab'
B.'\101'
C."A"
D.PI

字符常量只有一个字符 a错
b是特殊字符叫转义字符 b对
c是字符串常量
d 无意义
 */

#include <stdio.h>

int main()
{
    const char c = '\101';
    printf("%c\n",c);
    return 0;
}