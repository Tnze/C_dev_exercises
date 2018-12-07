#include <stdio.h>

//交换两个变量的值
void swap(char *a, char *b)
{
    char c = *a;
    *a = *b;
    *b = c;
}

//冒泡排序
void bubble(char array[], int len)
{
    for (int j = 0; j < len; j++)
    {
        int count = 0;
        for (int i = 1; i < len - j; i++)
            if (array[i - 1] > array[i])
            {
                swap(array + i - 1, array + i);
                count++;
            }
        //如果一趟循环内没有需要交换的值则说明排序已经完成，直接退出
        if (!count) //等价于 if (count == 0)
            return;
    }
}

int main()
{
    char cs[11];
    //输入
    for (int i = 0; i < 10; i++)
        cs[i] = getchar();
    //排序
    bubble(cs, 10);

    //最后加一个空字符
    cs[10] = '\0';
    //输出
    printf("%s\n", cs);
}