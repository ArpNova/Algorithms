#include <stdio.h>

int main()
{
    int n, e, i, j;
    int u[20], v[20], w[20];
    int dist[10];
    int source;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter source, destination and weight of each edge:\n");
    for (i = 0; i < e; i++)
    {
        scanf("%d %d %d", &u[i], &v[i], &w[i]);
    }

    printf("Enter source vertex: ");
    scanf("%d", &source);

    for (i = 0; i < n; i++)
        dist[i] = 999;

    dist[source] = 0;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < e; j++)
        {
            if (dist[u[j]] != 999 && dist[u[j]] + w[j] < dist[v[j]])
                dist[v[j]] = dist[u[j]] + w[j];
        }
    }

    for (j = 0; j < e; j++)
    {
        if (dist[u[j]] != 999 && dist[u[j]] + w[j] < dist[v[j]])
        {
            printf("Negative weight cycle detected\n");
            return 0;
        }
    }

    printf("Shortest distances from vertex %d:\n", source);

    for (i = 0; i < n; i++)
        printf("To %d = %d\n", i, dist[i]);

    return 0;
}