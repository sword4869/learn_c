/**
在C语言中，int、short、char三种类型数据所占据的存储空间是（C）
A.均为2个字节
B.int、short占2个字节，char占4个字节
C.与编译环境有关，在32位机器和64位机器上可能不同
D.由用户自己定义


32位机器的字节数：
char(1), bool(1), short(2), int(4), long(4), float(4), double(8), long long(8)
指针都是(4)
sizeof(数组)=数组的元素个数*每个元素所占字节
函数的形式参数的数组也是指针，不是真数组。

64位机器：
仅指针是(8)，其余一样。

unsigned char在32位机的存储范围是0~255

*/
#include <stdio.h>
#include <string.h>

void func(int a1[], int *a2, char b1[], char *b2, char c1[], char *c2)
{
    printf("int*:%d %d, char*:%d %d %d %d\n", sizeof(a1), sizeof(a2), sizeof(b1), sizeof(b2), sizeof(c1), sizeof(c2));
}

int main()
{
    printf("char(%d), bool(%d), short(%d), int(%d), unsigned int(%d), long(%d), float(%d), double(%d), long long(%d)\n", sizeof(char), sizeof(bool), sizeof(short), sizeof(int), sizeof(unsigned int), sizeof(long), sizeof(float), sizeof(double), sizeof(long long));
    printf("char*(%d), bool*(%d), short*(%d), int*(%d)...\n", sizeof(char *), sizeof(bool *), sizeof(short *), sizeof(int *));

    int a[10];
    printf("int[10]:%d\n", sizeof(a));
    // int[10]:40

    char b[] = "Hello";
    char *c = b;        // 这是指针
    char *d = "Hello";  // 这是指针
    printf("b:%d %d, c:%d %d, d:%d %d\n", sizeof(b), strlen(b), sizeof(c), strlen(c), sizeof(d), strlen(d));
    // b:6 5, c:8 5, d:8 5

    func(a, a, b, b, c, c);
    //int*:8 8, char*:8 8 8 8
    return 0;
}