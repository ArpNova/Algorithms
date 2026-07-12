#include <stdio.h>

int main()
{
    int n, i, j, a, b, u, v;
    int cost[10][10], visited[10] = {0};
    int min, minCost = 0, edges = 1;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);

            if (cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }

    visited[0] = 1;

    printf("\nEdges in Minimum Spanning Tree:\n");

    while (edges < n)
    {
        min = 999;

        for (i = 0; i < n; i++)
        {
            if (visited[i])
            {
                for (j = 0; j < n; j++)
                {
                    if (!visited[j] && cost[i][j] < min)
                    {
                        min = cost[i][j];
                        a = u = i;
                        b = v = j;
                    }
                }
            }
        }

        printf("%d - %d : %d\n", a, b, min);
        minCost += min;
        visited[v] = 1;
        edges++;
    }

    printf("Minimum Cost = %d\n", minCost);

    return 0;
}