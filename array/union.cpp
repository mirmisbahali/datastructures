// Union of Two sorted arrays
#include<iostream>
#include<set>
using namespace std;

void getUnion(int a[], int n, int b[], int m)
{
    set<int> s;

    for (int i = 0; i < n; i++)
        s.insert(a[i]);
    for (int i = 0; i < m; i++)
        s.insert(b[i]);
    
    cout << "No. of Elements after union " << s.size() << endl;

    cout << "The Union of Both arrays is: ";
    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << ", ";
    
    cout << endl;
}
int main(void)
{
    int a[] = {1,2,3, 4,5}, n = 5;
    int b[] = {1, 2, 3}, m = 3;
    getUnion(a, n, b, m);
    return 0;
}