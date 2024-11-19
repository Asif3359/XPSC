#include <bits/stdc++.h>
using namespace std;

class Compare
{
    char start, end;

public:
    Compare(char start, char end) : start(start), end(end) {}

    bool operator()(const pair<char, int> &a, const pair<char, int> &b) const
    {
        if (a.first == b.first)
            return a.second < b.second;
        return (start > end) ? a.first > b.first : a.first < b.first;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();

        vector<pair<char, int>> tiles;

        for (int i = 0; i < n; ++i)
        {
            tiles.push_back({s[i], i + 1});
        }

        char start = s[0];
        char end = s[n - 1];

        char mn = min(start, end);
        char mx = max(start, end);

        vector<pair<char, int>> valid_tiles;
        for (auto tile : tiles)
        {
            if (tile.first >= mn && tile.first <= mx)
            {
                valid_tiles.push_back(tile);
            }
        }

        sort(valid_tiles.begin(), valid_tiles.end(), Compare(start, end));

        long long cost = 0;
        vector<int> path;

        for (size_t i = 0; i < valid_tiles.size(); ++i)
        {
            path.push_back(valid_tiles[i].second);
            if (i > 0)
            {
                cost += abs(valid_tiles[i].first - valid_tiles[i - 1].first);
            }
        }

        cout << cost << " " << path.size() << "\n";
        for (int idx : path)
        {
            cout << idx << " ";
        }
        cout << "\n";
    }

    return 0;
}
