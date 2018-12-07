#include <stdio.h>

int main(void)
{
    char at[] =
        "asdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjow"
        "asdf;lkjowasdF;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjow"
        "asdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjowasdf;lkjow";
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
