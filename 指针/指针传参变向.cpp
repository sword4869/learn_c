/**
 * 函数传参，`char *s = p;`，意思是s指向p的地址，即s指向"PROGRAM"。然后在函数内修改 s的指向，s指向“STRING”。
 * 注意，P的指向并没有发生变化，“PROGRAM”的内容更没有变化。
 */ 

#include <stdio.h>
#include <string.h>
void fun(char *s) {
    char a[10];
    strcpy(a, "STRING");
    s = a;
    printf("%s\n", s);
}
 
int main() {
    char *p = "PROGRAM";
    fun(p);
    printf("%s\n", p);
    return 0;
}
/**
STRING
PROGRAM
 */ 