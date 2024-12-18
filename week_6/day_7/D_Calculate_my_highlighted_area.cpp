#include <bits/stdc++.h>
using namespace std;

int ans(const vector<int> &h, const string &word)
{
    int max_height = 0;

    for (char c : word)
    {
        int index = c - 'a';
        max_height = max(max_height, h[index]);
    }

    int area = max_height * word.length();
    return area;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> h(26);

    for (int i = 0; i < 26; ++i)
    {
        cin >> h[i];
    }

    string word;
    cin >> word;

    cout << ans(h, word) << endl;

    return 0;
}
