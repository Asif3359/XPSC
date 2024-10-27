#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, T;
    cin >> A >> B >> T;

    float T1 = T + 0.5;
    int sum = 0;

    while (A <= T1)
    {
        sum += B;
        T1 -= A; 
    }
    cout << sum << endl;

    return 0;
}
