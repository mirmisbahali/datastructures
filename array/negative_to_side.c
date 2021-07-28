// Move all negative numbers to beginning and positive to end with constant extra space

/*
This problem can be solved using the Partition logic of Quick Sort Algorithm
*/
#include<stdio.h>

void Partition(int *arr, int n)
{
    int pivot = 0, pindex = 0, temp=0;
    
    for (int i = 0; i < n; i++)
    {

        if (*(arr + i) < pivot)
        {
            temp = *(arr + pindex);
            *(arr + pindex) = *(arr + i);
            *(arr + i) = temp;
            pindex++;
        }
    }
}

int main(void)
{
    int arr[] = {-12, 11, -13, -5, -6, -7, 5, -3, -6}, n = 9;
    
    Partition(arr, n);
    

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}