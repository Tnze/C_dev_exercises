/*
    输入3个整数，按由小到大的顺序输出
*/
#include <stdio.h>

//交换两个int的值
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

// 对三个int由小到大排序
void sort(int *a, int *b, int *c)
{
    if (*a > *b)
        swap(a, b);
    if (*a > *c)
        swap(a, c);
    if (*b > *c)
        swap(b, c);
}

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    sort(&a, &b, &c);
    printf("%d, %d, %d", a, b, c);
}