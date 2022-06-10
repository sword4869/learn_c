/**
 * int a[3] = {1,2};
 * int b[3][3] = {{1,2},{3,4}};
 * 数组其实是1 2 0 3 4 0 0 0 0
 */

#include <stdio.h>
int main()
{
    int a[3] = {1, 2};
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    int b[3][3] = {{1, 2}, {3, 4}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
    }
    return 0;
}
/**
1 2 0
1 2 0 3 4 0 0 0 0
 */