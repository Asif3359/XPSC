#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    set<string> st;
    while (t--)
    {
        string tree_leavsi;
        getline(cin, tree_leavsi);
        st.insert(tree_leavsi);
    }
    cout << st.size() << endl;

    return 0;
}
