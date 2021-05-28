#include<stdio.h>

/*
void sort1(int arr[], n)
{
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
}
*/


int main(void)
{
    int n = 3, arr[] = {0, 1, 0};

    // sort1(arr, n);

    /* Method 2
    count number of 0s, 1s, and 2s,
    Then add them in the array in assending order
    */
    int count0=0, count1=0, count2=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else count2++;
    }
    for (int i = 0; i < count0; i++)
    {
        arr[i] = 0;
    }
    for (int i = count0, j = 0; j < count1-1; i++, j++)
    {
        arr[i] = 1;
    }
    for (int i = count1, k = 0; k < count2-1; i++, k++)
    {
        arr[i] = 2;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;   
}