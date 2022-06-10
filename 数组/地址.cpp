#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	int arr[5] = { 0,10 };
	printf("%d\n", sizeof(arr));
	printf("&arr = %d\n", &arr);//数组的首地址
    printf("&arr[0] = %d\n", &arr[0]);//数组的首元素地址
    printf("arr = %d\n", arr);//数组的首元素地址
	
	printf("&arr[1] = %d\n", &arr[1]);
    printf("&arr + 1 = %d\n", &arr + 1);//数组的首地址+1，加的是整个数组指针
	printf("&arr[0] + 1 = %d\n", &arr[0] + 1);//数组的首元素地址+1，加的是元素指针
	printf("arr + 1 = %d\n", arr + 1);//数组的首元素地址+1，加的是元素指针
	

	printf("---------------------------------\n");

	int arr2[3][4] = {0,100};
    
	printf("%d\n", sizeof(arr2));
	printf("&arr=%d\n", &arr2);//二维数组地址
	printf("&arr2[0]=%d\n", &arr2[0]);//一维数组地址
	printf("&arr2[0][0]=%d\n", &arr2[0][0]);//一维数组首元素地址
    printf("arr2=%d\n", arr2);//一维数组首元素地址
 
	printf("&arr2+1=%d\n", &arr2+1);//+48, 二维数组地址，加的是二维数组指针
	printf("&arr2[0]+1=%d\n", &arr2[0]+1);//+16, 一维数组地址，加的是一维数组指针
    printf("&arr2[0][0]+1=%d\n", &arr2[0][0]+1);// +4，加的是元素指针
    printf("arr2+1=%d\n", arr2+1);// +16，加的是一维数组指针

	printf("---------------------------------\n");

	printf("%d %d %d\n", arr[1], *(arr + 1), *(&arr[0] + 1));

	return 0;
}
/**
20
&arr = 6422000
&arr[0] = 6422000
arr = 6422000
&arr[1] = 6422004
&arr + 1 = 6422020
&arr[0] + 1 = 6422004
arr + 1 = 6422004
---------------------------------
48
&arr=6421952
&arr2[0]=6421952
&arr2[0][0]=6421952
arr2=6421952
&arr2+1=6422000
&arr2[0]+1=6421968
&arr2[0][0]+1=6421956
arr2+1=6421968
 */ 