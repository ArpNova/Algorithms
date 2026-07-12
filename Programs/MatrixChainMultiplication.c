#include <stdio.h>

int m[10][10];

int matrixChain(int p[], int i, int j)
{
    if (i == j)
        return 0;

    if (m[i][j] != -1)
        return m[i][j];

    int k, cost, min = 999999;

    for (k = i; k < j; k++)
    {
        cost = matrixChain(p, i, k)
             + matrixChain(p, k + 1, j)
             + p[i - 1] * p[k] * p[j];

        if (cost < min)
            min = cost;
    }

    m[i][j] = min;
    return min;
}

int main()
{
    int n, i, j;
    int p[10];

    printf("Enter number of matrices: ");
    scanf("%d", &n);

    printf("Enter dimensions:\n");
    for (i = 0; i <= n; i++)
        scanf("%d", &p[i]);

    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            m[i][j] = -1;

    printf("Minimum scalar multiplications = %d\n", matrixChain(p, 1, n));

    return 0;
}