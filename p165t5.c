/*
    将一个数组中的值按逆序重新存放。例如，原来顺序为8，6，5，4，1。要求改为1，4，5，6，8。
*/
#include <stdio.h>

int main(void)
{
    int array[] = {8, 6, 5, 4, 1};
    int len = 5;
    for (int i = 0; i < len - 1; i++)
    {
        int t = array[0];
        for (int j = 0; j < len - i - 1; j++)
            array[j] = array[j + 1];
        array[len - i - 1] = t;
    }
    //输出
    for (int i = 0; i < len; i++)
        printf("%d ", array[i]);
    printf("\n");
}
