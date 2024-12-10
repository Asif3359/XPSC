#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<int> allPalindrome;

void palindrome()
{
    for (int i = 0; i < 32786; i++)
    {
        string str = to_string(i);
        string rev = str;
        reverse(str.begin(), str.end());
        if (rev == str)
        {
            allPalindrome.push_back(i);
        }
    }
}

void solve()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unordered_map<int, int> x;
    ll ans = 0;
    for (auto val : v)
    {
        ++x[val];
        for (auto pln : allPalindrome)
        {
            ans += x[val ^ pln];
        }
    }
    cout << ans << endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    palindrome();
    int t;
    cin >> t;

    while (t-- > 0)
    {
        solve();
    }
    return 0;
}
