#include <stdio.h>

int parent[10];

int find(int i)
{
    while (parent[i] != 0)
        i = parent[i];
    return i;
}

void unite(int a, int b)
{
    parent[b] = a;
}

int main()
{
    int n, i, j;
    int cost[10][10];
    int min, minCost = 0;
    int a, b, u, v;
    int edges = 1;

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

    printf("\nEdges in Minimum Spanning Tree:\n");

    while (edges < n)
    {
        min = 999;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }

        u = find(u);
        v = find(v);

        if (u != v)
        {
            printf("%d - %d : %d\n", a, b, min);
            minCost += min;
            unite(u, v);
            edges++;
        }

        cost[a][b] = cost[b][a] = 999;
    }

    printf("Minimum Cost = %d\n", minCost);

    return 0;
}