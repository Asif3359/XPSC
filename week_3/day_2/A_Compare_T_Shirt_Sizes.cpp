#include <bits/stdc++.h>
using namespace std;

char compareSizes(const string &a, const string &b)
{
    if (a == b)
    {
        return '=';
    }

    char lastA = a.back();
    char lastB = b.back();

    if (lastA == 'M' && lastB != 'M')
    {
        if (lastB == 'S')
            return '>';
        else
            return '<';
    }
    else if (lastB == 'M' && lastA != 'M')
    {
        if (lastA == 'S')
            return '<';
        else
            return '>';
    }
    else if (lastA == 'M' && lastB == 'M')
    {
        return '=';
    }

    int countA = a.size() - 1;
    int countB = b.size() - 1;

    if (lastA == 'S' && lastB == 'S')
    {
        if (countA > countB)
            return '<';
        else
            return '>';
    }

    if (lastA == 'L' && lastB == 'L')
    {
        if (countA > countB)
            return '>';
        else
            return '<';
    }

    if (lastA == 'S' && lastB == 'L')
    {
        return '<';
    }
    else
    {
        return '>';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << compareSizes(a, b) << endl;
    }
    return 0;
}
