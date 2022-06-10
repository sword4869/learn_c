/**
 * strcpy(s1,s2)这个函数是把s2字符串拷贝到s1这个字符串，同时也把s2的 '\0' 拷过去，所以覆盖了s1的所有字符
 * strncpy(s1,s2,n) 没有自动加上终止符的，需要手动加上不然会出问题的。
 */ 

#include <stdio.h>
#include <string.h>
 
int main()
{
   char src[40];                       // 先定义再赋值
   char dest[12] = "123456789AB";      // 初始化
  
   strcpy(src, "therefore");           // src = "therefore"; 是错误的
   printf("%s\n", src);
   // printf("%s\n", strcpy(src, "therefore"));  //返回值就是指向s1字符串的指针，可以一步到位
   
   
   strncpy(dest, src, 5);
   printf("%s\n", dest);

   dest[5] = '\0';
   printf("%s\n", dest);
   
   return(0);
}
/**
therefore
there6789AB
there
 */ 