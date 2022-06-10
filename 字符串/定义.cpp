/**
下面选项中的程序段，没有编译错误的是（）

正确答案: A   你的答案: A (正确)
A.char* sp, s[10]; sp = "Hello";
B.char* sp, s[10]; s = "Hello";
C.char str1[10] = "computer", str2[10]; str2 = str1;
D.char mark[]; mark = "PROGRAM";

解析：
 B 选项不能直接将字符串赋值给数组名，
 C 选项不能将两个字符数组直接互相赋值，
 D 选项中不能这样定义 char mark[] ，必须指定长度或者直接初始化。

---

“数组名为常量指针”？
数组就是数组，不是指针。
数组名代表被分配的内存的首地址，是一个地址常量，是右值；
而指针作为变量，却是一个左值。数组名不是常量指针，因为他们的类型不一样。

---



char *p = "girl";
在这个声明中，"girl"被存储在静态数据区，而且是全局的，p仅仅就是个指针，指向这个区域；

char p[] = "girl";
p数组作为局部变量被存储在栈区；

 */

#include <stdio.h>
char *func()
{
    char *sp;
    sp = "Hello";
    printf("%s %x\n", sp, sp);
    return sp;
}
int *func2()
{
    int *sp, m = 10;
    sp = &m;
    printf("%d %x\n", *sp, sp);
    return sp;
}
int main()
{
    char *p = func();
    printf("%s %x\n", p, p);
    p = "xyz";                      // 修改了指向
    printf("%s %x\n", p, p);

    int *p2 = func2();
    printf("%d %x\n", *p2, p2);
    *p2 = 20;                       // 修改了值
    printf("%d %x\n", *p2, p2);
    return 0;
}
/**
Hello 404000
Hello 404000
xyz 404014
10 61fdd4
10 61fdd4
20 61fdd4
 */