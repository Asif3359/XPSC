#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        string S;
        cin >> N >> S;
        int zeroCount = 0, oneCount = 0;

        for (char c : S)
        {
            if (c == '0')
                zeroCount++;
            else if (c == '1')
                oneCount++;
        }

        bool changed = true;

        while (changed)
        {
            changed = false;
            int i = 0;

            while (i < S.length() - 1)
            {
                if (S[i] != S[i + 1])
                {
                    if (zeroCount > oneCount)
                    {
                        S.erase(i, 1);
                        zeroCount--;
                    }
                    else if (oneCount > zeroCount)
                    {
                        S.erase(i + 1, 1);
                        oneCount--;
                    }
                    else if (zeroCount == oneCount)
                    {
                        S.erase(1, i);
                        zeroCount--;
                    }

                    changed = true;
                    break;
                }
                i++;
            }

            if (!changed)
            {
                break;
            }
        }
        cout << S.length() << endl;
    }

    return 0;
}
