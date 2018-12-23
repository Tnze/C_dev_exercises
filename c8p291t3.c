/*
    输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。
    写3个函数： 1.输入10个数 2.进行处理 3.输出10个数
*/
#include <stdio.h>

//输入10个数
void input(int ary[])
{
    int i;
    for (i = 0; i < 10; i++)
        scanf("%d", &ary[i]);
}

//交换两个int的值
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

//进行处理
void function(int ary[])
{
    //找最小的数和最大的数
    int i;
    int max = ary[0],
        min = ary[0],
        max_i = 0,
        min_i = 0;
    for (i = 0; i < 10; i++)
    {
        if (ary[i] > max)
        {
            max = ary[i];
            max_i = i;
        }

        if (ary[i] < min)
        {
            min = ary[i];
            min_i = i;
        }
    }

    //  最小的数和第一个数互换
    swap(&ary[0], &ary[min_i]);
    //  最大的数和最后一个数互换
    swap(&ary[9], &ary[max_i]);
}

void output(int ary[])
{
    int i;
    for (i = 0; i < 10; i++)
        printf("%d ", ary[i]);
}

int main(void)
{
    int ary[10];
    input(ary);
    function(ary);
    output(ary);
}