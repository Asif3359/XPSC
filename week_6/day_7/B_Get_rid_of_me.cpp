#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &s, int left, int right)
{
    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int palindromeIndex(const string &s)
{
    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            if (isPalindrome(s, left + 1, right))
            {
                return left;
            }
            if (isPalindrome(s, left, right - 1))
            {
                return right;
            }
            return -1;
        }
        left++;
        right--;
    }

    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    vector<int> results;

    while (q--)
    {
        string s;
        cin >> s;
        results.push_back(palindromeIndex(s));
    }

    for (int result : results)
    {
        cout << result << endl;
    }

    return 0;
}