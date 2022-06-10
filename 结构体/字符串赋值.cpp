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

char *p = "girl";
在这个声明中，"girl"被存储在静态数据区，而且是全局的，p仅仅就是个指针，指向这个区域；

char p[] = "girl";
p数组作为局部变量被存储在栈区；

 */

#include <stdio.h>
#include <string.h>
int main()
{
    char *sp = "Hello";
    char *sp2;
    sp2 = "world";

    char s[] = "Hello";
    char s2[10];
    // s2 = "world"; 错误的
    // s2 = s1; 错误的
    strcpy(s2, "world");
    return 0;
}
/**
 */