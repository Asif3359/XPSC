#include <bits/stdc++.h>
using namespace std;


vector<string> anses(const string &s, const vector<int> &q)
{
    set<int> weights; 

    char prev_char = '\0';
    int current_weight = 0;
    for (char c : s)
    {
        int weight = c - 'a' + 1;
        if (c == prev_char)
        {
            current_weight += weight; 
        }
        else
        {
            current_weight = weight; 
        }
        weights.insert(current_weight); 
        prev_char = c;
    }

    vector<string> result;
    for (int query : q)
    {
        result.push_back(weights.count(query) ? "Yes" : "No");
    }

    return result;
}

int main()
{
    string s;
    cin >> s;

    int n;
    cin >> n;

    vector<int> q(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> q[i];
    }

    vector<string> result = anses(s, q);

    for (const string &res : result)
    {
        cout << res << endl;
    }

    return 0;
}