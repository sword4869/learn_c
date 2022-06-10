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
 */ 

#include <stdio.h>
#include <string.h>
int main()
{
    char *sp1 = "Hello";
    char *sp2;
    sp2 = "World";
    char *sp3;
    sp3 = sp1;

    char s1[] = "Hello";
    char s2[] = {"Hello"};
    char s3[5] = {'H','e','l','l','o'};
    char s4[6] = {'H','e','l','l','o','\0'};
    
    char s5[10];
    strcpy(s5, "World");
    // 都是修改了 s5 的指向
    // s5 = s1; 错误    
    // s5 = "World"; 错误

    printf("%s\n", s3);     // 输出的时候有问题
    printf("%s\n", s4);


    return 0;
}
/**
HelloHello
4ello
 */ 