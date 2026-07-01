
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, temp;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        vector<int> a;
        a.push_back(0);
        for (int i = 1; i <= n; i++)
        {
            cin >> temp;
            a.push_back(temp);
        }
        a.push_back(x);
        vector<int> dist;
        for (int i = 0; i < a.size() - 1; i++)
        {
            dist.push_back(a[i + 1] - a[i]);
        }
        int lastDist = dist[dist.size() - 1];
        dist.pop_back();
        dist.push_back(2 * lastDist);

        cout << *(max_element(dist.begin(), dist.end())) << endl;
    }
    return 0;
}
