#include <stdio.h>

int max, min;

void findMaxMin(int arr[], int low, int high)
{
    int mid;

    if (low == high)
    {
        if (arr[low] > max)
            max = arr[low];

        if (arr[low] < min)
            min = arr[low];

        return;
    }

    mid = (low + high) / 2;

    findMaxMin(arr, low, mid);
    findMaxMin(arr, mid + 1, high);
}

int main()
{
    int n, i;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = min = arr[0];

    findMaxMin(arr, 0, n - 1);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}