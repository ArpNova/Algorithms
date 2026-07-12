#include <stdio.h>
#include <stdlib.h>

int x[8];

int place(int k, int i)
{
    int j;

    for (j = 0; j < k; j++)
    {
        if (x[j] == i || abs(x[j] - i) == abs(j - k))
            return 0;
    }

    return 1;
}

void queen(int k)
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        if (place(k, i))
        {
            x[k] = i;

            if (k == 7)
            {
                printf("\nSolution:\n");

                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 8; j++)
                    {
                        if (x[i] == j)
                            printf("Q ");
                        else
                            printf(". ");
                    }
                    printf("\n");
                }

                return;
            }
            else
            {
                queen(k + 1);
            }
        }
    }
}

int main()
{
    queen(0);
    return 0;
}