#include <stdio.h>

void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void)
{
    int mat[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}};

    swap(&mat[0][1], &mat[1][0]);
    swap(&mat[0][2], &mat[2][0]);
    swap(&mat[1][2], &mat[2][1]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d, ", mat[i][j]);
        printf("\n");
    }
}