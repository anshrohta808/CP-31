#include <bits/stdc++.h> // include all standard headers
using namespace std;
int main()
{
    int t, n, k; // number of test cases
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> cpy = a;
        sort(cpy.begin(), cpy.end());
        if (k == 1 && a != cpy)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}