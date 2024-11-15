#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(string pat, string txt)
    {
        int res = 0;
        int n1 = pat.size();
        int n2 = txt.size();

        if (n1 > n2)
            return 0;

        vector<int> pcnt(26, 0), wcnt(26, 0);

        for (int i = 0; i < n1; i++)
        {
            pcnt[pat[i] - 'a']++;
            wcnt[txt[i] - 'a']++;
        }

        for (int i = n1; i < n2; i++)
        {
            if (pcnt == wcnt)
                res++; 

            wcnt[txt[i] - 'a']++;
            wcnt[txt[i - n1] - 'a']--;
        }

        if (pcnt == wcnt)
            res++;

        return res;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    return 0;
}
