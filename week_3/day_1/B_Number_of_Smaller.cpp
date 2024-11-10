#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> vc1(n);
    vector<int> vc2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> vc1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> vc2[i];
    }


    vector<int> ans(m);
    int i = 0; 

    for (int j = 0; j < m; j++)
    {
        
        while (i < n && vc1[i] < vc2[j])
        {
            i++;
        }
        
        ans[j] = i;
    }

    for (int count : ans)
    {
        cout << count << " ";
    }
    cout << endl;

    return 0;
}
