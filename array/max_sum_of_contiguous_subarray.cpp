// Given an array arr of N integers. Find the contiguous sub-array with maximum sum
#include<iostream>

using namespace std;

int main(void)
{
    int a[] = {-1,-2,-3,-4}, n=4;
    int max_so_far = a[0], max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here += a[i];
        if (max_so_far < max_ending_here) max_so_far = max_ending_here;
        else if (max_ending_here < 0) max_ending_here = 0;
    }

    cout << max_so_far << endl;

    return 0;
}