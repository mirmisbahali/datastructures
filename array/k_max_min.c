#include<stdio.h>

int main(void)
{
    int k = 3, n = 6, arr[] = {7, 10, 4, 3, 20, 15};

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("%dth Smallest number is: %d\n", k, arr[k-1]);

    return 0;
}