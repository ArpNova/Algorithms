#include <stdio.h>

int main()
{
    int n, i, j, u, v;
    int cost[10][10], dist[10], visited[10];
    int min, source;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &cost[i][j]);

            if (i != j && cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }

    printf("Enter source vertex: ");
    scanf("%d", &source);

    for (i = 0; i < n; i++)
    {
        dist[i] = cost[source][i];
        visited[i] = 0;
    }

    dist[source] = 0;
    visited[source] = 1;

    for (i = 1; i < n; i++)
    {
        min = 999;

        for (j = 0; j < n; j++)
        {
            if (!visited[j] && dist[j] < min)
            {
                min = dist[j];
                u = j;
            }
        }

        visited[u] = 1;

        for (v = 0; v < n; v++)
        {
            if (!visited[v] && dist[u] + cost[u][v] < dist[v])
                dist[v] = dist[u] + cost[u][v];
        }
    }

    printf("Shortest distances from vertex %d:\n", source);

    for (i = 0; i < n; i++)
        printf("To %d = %d\n", i, dist[i]);

    return 0;
}