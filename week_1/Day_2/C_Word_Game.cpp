#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int t;
        cin >> t;

        vector<string> player1(t), player2(t), player3(t);
        map<string, int> word_count;

        for (int i = 0; i < t; i++)
        {
            cin >> player1[i];
            word_count[player1[i]]++;
        }
        for (int i = 0; i < t; i++)
        {
            cin >> player2[i];
            word_count[player2[i]]++;
        }
        for (int i = 0; i < t; i++)
        {
            cin >> player3[i];
            word_count[player3[i]]++;
        }

        int p1 = 0, p2 = 0, p3 = 0;

        for (auto word : player1)
        {
            if (word_count[word] == 1)
            {
                p1 += 3;
            }
            else if (word_count[word] == 2)
            {
                p1 += 1;
            }
        }
        for (auto word : player2)
        {
            if (word_count[word] == 1)
            {
                p2 += 3;
            }
            else if (word_count[word] == 2)
            {
                p2 += 1;
            }
        }
        for (auto word : player3)
        {
            if (word_count[word] == 1)
            {
                p3 += 3;
            }
            else if (word_count[word] == 2)
            {
                p3 += 1;
            }
        }

        cout << p1 << " " << p2 << " " << p3 << endl;
    }

    return 0;
}
