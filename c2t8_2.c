/*
    求ax^2 + bx + c =0的根。分别考虑d=b^2-4ac大于0、等于0和小于0这3种情况。
*/
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d, %d, %d", &a, &b, &c);
    int d = b * b - 4 * a * c;
    if (d > 0)
    {
        //-b+-d^(-2)/2ac
    }
    else if (d == 0)
    {
    }
    else if (d < 0)
    {
    }
}