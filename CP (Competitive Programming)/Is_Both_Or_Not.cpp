#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n / 5 == 0 && n / 11 == 0)
        {
            cout << "Both";
        }
        else if (n / 5 == 0 || n / 11 == 0)
        {
            cout << "ONE";
        }
        else
        {
            cout << "NONE";
        }
    }
    return 0;
}