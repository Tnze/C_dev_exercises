/*
    编写一个C程序，运行时输入a,b,c三个值，输出其中值最大着。
*/
#include <stdio.h>

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b, c;
    scanf("%d, %d, %d", &a, &b, &c);
    printf("%d\n", max(a, max(b, c)));
    return 0;
}