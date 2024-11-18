#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int m = n * (n - 1) / 2; 
        vector<int> b(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<int> a;
        int k = n - 1, idx = 0;

        for (int i = 0; i < n - 1; i++)
        {
            a.push_back(b[idx]); 
            idx += k;            
            k--;
        }
        a.push_back(b.back()); 

        for (int x : a)
        {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}
