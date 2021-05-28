#include<stdio.h>

int main(void)
{
    int n = 3, arr[] = {0, 1, 0};

    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;   
}