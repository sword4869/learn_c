#include<stdio.h>

int main() {
    int a = 9;
    a += a -= a + a;
    printf("%d\n", a);
    return 0;
}
/**
根据运算优先级可将上面式子分解成如下：
赋值运算符： 从右到左
1、a -= (a+a), 即 a = a - (a+a) = -a;
2、a += （第一个式子的结果），即 a = a + a = 2 * a;
第一个式子的结果 a = 9 - 18 = -9;
故 2中 a = a + (-9) = -9 + (-9) =  -18。
注意2中 a += (-9)，容易直接代入a=9等于0.
 */ 