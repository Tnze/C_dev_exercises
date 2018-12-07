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
