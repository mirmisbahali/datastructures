// Move all negative numbers to beginning and positive to end with constant extra space
#include<stdio.h>

int main(void)
{
    int arr[] = {-12, 11, -13, -5, -6, -7, 5, -3, -6}, n = 9;
    
    int low=0, high=n , temp=0;
    
    int i = 0;
    while (low < high && i < n)
    {
        if (arr[i] < 0)
        {
            temp = arr[i];
            arr[i] = arr[low];
            arr[low] = temp;
            low++; 
        }
        if (arr[i] > 0)
        {
            temp = arr[i];
            arr[i] = arr[high];
            arr[high] = temp;
            high--;
        }
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}