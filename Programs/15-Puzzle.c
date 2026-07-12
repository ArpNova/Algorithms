#include <stdio.h>

int main()
{
    int puzzle[4][4];
    int i, j;
    int count = 1;
    int solved = 1;

    printf("Enter the 4x4 puzzle (use 0 for the empty space):\n");

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            scanf("%d", &puzzle[i][j]);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i == 3 && j == 3)
            {
                if (puzzle[i][j] != 0)
                    solved = 0;
            }
            else
            {
                if (puzzle[i][j] != count)
                    solved = 0;
                count++;
            }
        }
    }

    if (solved)
        printf("Puzzle is already solved.\n");
    else
        printf("Puzzle is not solved.\n");

    return 0;
}