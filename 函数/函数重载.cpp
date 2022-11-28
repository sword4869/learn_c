#include <stdio.h>
int sum(int a, int b){return a+b;}
double sum(double a, double b){return a+b;}

int main()
{
    printf("%d\n", sum(1,2));
    printf("%lf\n", sum(3.3, 4.4));
    return 0;
}