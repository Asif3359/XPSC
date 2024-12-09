#include <bits/stdc++.h>
using namespace std;

string bin(long long n)
{
    string binary;
    if (n == 0)
        return "0";
    while (n > 0)
    {
        binary = (n % 2LL == 0 ? "0" : "1") + binary;
        n /= 2LL;
    }
    return binary;
}

long long dec(const string &binary)
{
    long long decimal = 0;
    long long base = 1;
    for (int i = binary.size() - 1; i >= 0; --i)
    {
        if (binary[i] == '1')
        {
            decimal += base;
        }
        base *= 2LL;
    }
    return decimal;
}

void solve()
{
    long long n;
    cin >> n;
    string t = bin(n);
    int bit = t.length() - 1;
    vector<long long> arr;
    set<long long> s;

    while (true)
    {
        string tt = t;
        s.insert(dec(tt));
        if (bit < 0)
            break;

        int ind = -1;
        for (int i = bit; i >= 0; --i)
        {
            if (t[i] == '1')
            {
                ind = i;
                t[i] = '0';
                break;
            }
        }
        tt = t;
        s.insert(dec(tt));
        t[ind] = '1';
        bit = ind - 1;
    }

    if (s.count(0))
        s.erase(0);

    cout << s.size() << endl;
    for (long long ele : s)
        cout << ele << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
