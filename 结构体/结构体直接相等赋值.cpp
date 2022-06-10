/**
 * 结构体类型变量可以直接相等赋值 `p2 = p1;`，而且是深拷贝。
 */ 

#include<stdio.h>
#include<string.h>
int main()
{
    struct Man{
        int age;
        char name[10];
    } p1 = {10, "Alice"}, p2 = p1;
    p1.age = 20;
    strcpy(p1.name, "Bob");
    printf("%d %s\n", p2.age, p2.name);
    return 0;
}