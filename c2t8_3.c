/*
    输入1-个数，输出其中最大的一个数。
*/
#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &b);
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &a);
        if (a > b)
            b = a;
    }
    printf("最大的：%d\n", b);
    return 0;
}