#include <stdio.h>

int main(void)
{
    int juzf[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int sum = juzf[0][0] + juzf[1][1] + juzf[2][2];
    printf("%d\n", sum);
}
