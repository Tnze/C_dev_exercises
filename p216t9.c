#include <stdio.h>

//统计字符串各数值
void tsji(char at[], int len, int res[5])
{
    for (int i = 0; i < len; i++)
    {
        char n = at[i];
        if (n == ' ')
            res[0]++;
        else if (n >= '0' && n <= '9')
            res[1]++;
        else if (n >= 'A' && n <= 'Z')
            res[2]++;
        else if (n >= 'a' && n <= 'z')
            res[3]++;
        else
            res[4]++;
    }
}

int main(void)
{
    char at[1024];
    //输入字符串
    int len = 0;
    printf("请输入: ");
    while ((at[len] = getchar()) != '\n') //读到换行符为止
        len++;
    //统计
    int res[5] = {0, 0, 0, 0, 0};
    tsji(at, len, res);
    //输出
    printf("大写：%d，小写：%d，数字：%d，空格%d，其他：%d\n", res[2], res[3], res[1], res[0], res[4]);
}