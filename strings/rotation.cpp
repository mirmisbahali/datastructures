// A program to check if strings are rotations of each other or not
#include <bits/stdc++.h>
using namespace std;

bool areRotation(string s1, string s2)
{
    if (s1.length() != s2.length()) return false;
    string temp = s1 + s2;
    


    return (temp.find(s2) != string::npos);
}

int main(void)
{
    if(areRotation("ABCD", "CDAB"))
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}