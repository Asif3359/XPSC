#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long int s;
    cin >> s;

    vector<long long int> vc(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vc[i];
    }

    long long int sum = 0;
    int l = 0;
    long long count = 0; 

    for (int r = 0; r < n; r++)
    {
        sum += vc[r]; 
       
        while (sum > s)
        {
            sum -= vc[l];
            ++l;
        }
        
        count += (r - l + 1);
    }

    cout << count << endl;

    return 0;
}
