// Write a Program to cyclically rotate an array by one
#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a[] = {1,2,3,4,5}, n=5;
    
    for (int i = n-1; i > 0; i--)
    {
        swap(&a[i], &a[i-1]);
    }

    cout << "After Cyclically rotating by one: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}