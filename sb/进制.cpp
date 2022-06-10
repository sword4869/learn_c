/**
 * 1-9开头表示十进制,以0开头表示八进制,以0X开头表示十六进制。
 */ 
#include <stdio.h>
int main()
{
    int i = 010, j = 10;
    printf("%d,%d\n", ++i, j--);
    return 0;
}
/**
9,10
 */ 