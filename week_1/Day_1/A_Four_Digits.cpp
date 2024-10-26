#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string fourDigit = to_string(N);

    while (fourDigit.length() < 4)
    {
        fourDigit = "0" + fourDigit;
    }

    cout << fourDigit << endl;

    return 0;
}
