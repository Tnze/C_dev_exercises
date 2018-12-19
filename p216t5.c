/*
    写一个函数，使输入的一个字符串按反序存放，在主函数中输入和输出字符串。
*/
#include <stdio.h>

//反序
void fjxu(char *string, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        char t = string[0];
        for (int j = 0; j < len - i - 1; j++)
            string[j] = string[j + 1];
        string[len - i - 1] = t;
        // printf("%s", string);//输出每次反序的中间过程
    }
}

int main(void)
{
    //输入
    char array[1024];
    int len = 0;
    printf("请输入: ");
    while ((array[len] = getchar()) != '\n')
        len++;

    // 反序
    fjxu(array, len);

    //输出
    printf("%s\n", array);
}
