#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T; // Number of test cases

    while (T--)
    {
        int N, M;
        string S, T;
        cin >> N >> M >> S >> T;

        // Count the occurrences of 'a' and 'b' in both strings
        int count_a_S = 0, count_b_S = 0;
        int count_a_T = 0, count_b_T = 0;

        // Counting 'a' and 'b' in S
        for (char c : S)
        {
            if (c == 'a')
                count_a_S++;
            else if (c == 'b')
                count_b_S++;
        }

        // Counting 'a' and 'b' in T
        for (char c : T)
        {
            if (c == 'a')
                count_a_T++;
            else if (c == 'b')
                count_b_T++;
        }

        // If counts of 'a' and 'b' match in both strings, it's possible to make them equal
        if (count_a_S == count_a_T && count_b_S == count_b_T)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
