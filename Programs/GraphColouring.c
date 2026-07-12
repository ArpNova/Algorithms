#include <stdio.h>

int graph[10][10], color[10];
int n, m;

int safe(int node, int c)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (graph[node][i] && color[i] == c)
            return 0;
    }

    return 1;
}

int solve(int node)
{
    int c;

    if (node == n)
        return 1;

    for (c = 1; c <= m; c++)
    {
        if (safe(node, c))
        {
            color[node] = c;

            if (solve(node + 1))
                return 1;

            color[node] = 0;
        }
    }

    return 0;
}

int main()
{
    int i, j;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of colors: ");
    scanf("%d", &m);

    printf("Enter adjacency matrix:\n");

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &graph[i][j]);

    if (solve(0))
    {
        printf("Coloring is possible:\n");

        for (i = 0; i < n; i++)
            printf("Vertex %d -> Color %d\n", i, color[i]);
    }
    else
    {
        printf("Coloring is not possible.\n");
    }

    return 0;
}