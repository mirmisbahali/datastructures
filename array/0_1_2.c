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
    Algorithm: 

    1. Keep three indices low = 1, mid = 1 and high = N and there are four ranges, 1 to low (the range containing 0), low to mid (the range containing 1), mid to high (the range containing unknown elements) and high to N (the range containing 2).
    2. Traverse the array from start to end and mid is less than high. (Loop counter is i)
    3. If the element is 0 then swap the element with the element at index low and update low = low + 1 and mid = mid + 1
    4. If the element is 1 then update mid = mid + 1
    5. If the element is 2 then swap the element with the element at index high and update high = high – 1 and update i = i – 1. As the swapped element is not processed
    6. Print the output array.

    int low=0, mid=0, high=n, temp=0;
    for (int i = 0; i < n, mid < high; i++)
    {
        if (arr[i] == 0)
        {
            temp = arr[i];
            arr[i] = arr[low];
            arr[low] = temp;
            low++; 
        }
        else if (arr[i] == 2)
        {
            temp = arr[i];
            arr[i] = arr[high];
            arr[high] = temp;
            high--;
        }
        else mid++;

    }
*/

/*
    Method 3
    count all 0s, 1s, and 2s.
    add these number of 0s, 1s and 2s in array
*/
    int count0=0, count1=0, count2=0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0) count0++;
        else if (arr[i] == 1) count1++;
        else count2++;
    }

    for (int i = 0; i < count0; i++) arr[i] = 0;
    for (int i = count0; i < (count0 + count1); i++) arr[i] = 1;
    for (int i = (count0 + count1); i < n; i++) arr[i] = 2;


    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;   
}