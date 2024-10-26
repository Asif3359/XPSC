#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int result = -1;
    for (int i = A; i <= B; i++)
    {
        if (i % C == 0)
        {
            result = i;
            break;
        }
    }

    cout << result << endl;

    return 0;
}
