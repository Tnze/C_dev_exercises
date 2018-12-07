/*
    有一篇文章，共有3行文字，每行有80个字符要求分别统计出其中英文大写字母、小写字母、数字、空格以及其他字符的个数。
*/
#include <stdio.h>

int main(void)
{
    char at[] =
        "asdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjo\n"
        "asdf;lkjowasdF;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjo\n"
        "asdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjo\n"; //测试文本
    int cksge = 0, cxcxx = 0, cdaxx = 0, cuuzi = 0, cqita = 0;
    for (int i = 0; i < 3 * 80; i++)
    {
        char n = at[i];
        if (n == ' ')
            cksge++;
        else if (n >= '0' && n <= '9')
            cuuzi++;
        else if (n >= 'A' && n <= 'Z')
            cdaxx++;
        else if (n >= 'a' && n <= 'z')
            cxcxx++;
        else
            cqita++;
    }
    printf("大写：%d，小写：%d，数字：%d，空格%d，其他：%d\n", cdaxx, cxcxx, cuuzi, cksge, cqita);
}
