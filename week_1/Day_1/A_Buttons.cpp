#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int coins = 0;
    if (A > B)
    {
        coins += A;
        A--;
    }
    else
    {
        coins += B;
        B--;
    }

    if (A > B)
    {
        coins += A;
    }
    else
    {
        coins += B;
    }

    cout << coins << endl;

    return 0;
}
