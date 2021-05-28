#include<stdio.h>

int main(void)
{
    int arr[] = {1, 2, 3}, n = 3;
    int temp, start = 0, end = n-1;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}