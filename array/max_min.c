// Find the maximum and minimum element in an array
#include<stdio.h>


struct pair
{
    int min;
    int max;
};

/*
// Mehod 1 (Simple Linear Search)
struct pair getMinMax(int arr[], int n)
{
    struct pair res;
    if (n==1)
    {
        res.min = arr[0];
        res.max = arr[0];
        return res;
    }

    if (arr[0] > arr[1])
    {
        res.max = arr[0];
        res.min = arr[1];
    }
    else
    {
        res.max = arr[1];
        res.min = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > res.max) res.max = arr[i];
        else if (arr[i] < res.min) res.min = arr[i];
    }

    return res;
}
*/


// Method 2 (Tournament Method)
/*
Divide the array into two parts and compare the maximums and minimums of the two parts to get the maximum and the minimum of the whole array

Pair MaxMin(array, array_size)
    if array_size = 1
        return element as both max and min
    else if array_size = 2
        one comparision to determine max and min
        return that pair
    else 
        recur for max and min of left half
        recur for max and min of right half
        one comparison determines true max of the two candidates
        one comparison determines true min of the two candidates
        return the pair of max and min
*/
struct pair getMinMax(int arr[], int n)
{
    struct pair minmax;
    if (n==1)
    {
        minmax.min = arr[0];
        minmax.max = arr[0];
        return minmax;
    }
    else if (n == 2)
    {
        if (arr[0] > arr[1])
        {
            minmax.min = arr[1];
            minmax.max = arr[0];
        } 
        else
        {
            minmax.min = arr[0];
            minmax.max = arr[1];
        }
        return minmax;
    }

    int lmax=arr[0], lmin=arr[0], rmax=arr[n/2], rmin=arr[n/2];
    for (int i = 2; i < n/2; i++)
    {
        if (arr[i] > lmax) lmax = arr[i];
        else if (arr[i] < lmin) lmin = arr[i];
    }
    for (int i = n/2; i < n; i++)
    {
        if (arr[i] > rmax) rmax = arr[i];
        else if (arr[i] < rmin) rmin = arr[i];
    }

    if (lmin < rmin) minmax.min = lmin;
    else minmax.min = rmin;

    if (lmax > rmax) minmax.max = lmax;
    else minmax.max = rmax;


    return minmax;

}

int main(void)
{
    int arr[] = {1, 2, 3, 4,5}, n = 5;
    struct pair numbers = getMinMax(arr, n);
    printf("Maximum Number: %d\n", numbers.max);
    printf("Minimum Number: %d\n", numbers.min);
    return 0;
}



