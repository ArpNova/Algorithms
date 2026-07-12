#include <stdio.h>

struct Job
{
    int id;
    int deadline;
    int profit;
};

int main()
{
    int n, i, j, maxDeadline = 0;
    int slot[20] = {0};
    int totalProfit = 0;

    struct Job job[20], temp;

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    printf("Enter deadline and profit of each job:\n");

    for (i = 0; i < n; i++)
    {
        job[i].id = i + 1;
        scanf("%d %d", &job[i].deadline, &job[i].profit);

        if (job[i].deadline > maxDeadline)
            maxDeadline = job[i].deadline;
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (job[i].profit < job[j].profit)
            {
                temp = job[i];
                job[i] = job[j];
                job[j] = temp;
            }
        }
    }

    printf("Selected Jobs: ");

    for (i = 0; i < n; i++)
    {
        for (j = job[i].deadline; j >= 1; j--)
        {
            if (slot[j] == 0)
            {
                slot[j] = job[i].id;
                totalProfit += job[i].profit;
                break;
            }
        }
    }

    for (i = 1; i <= maxDeadline; i++)
    {
        if (slot[i] != 0)
            printf("J%d ", slot[i]);
    }

    printf("\nMaximum Profit = %d\n", totalProfit);

    return 0;
}