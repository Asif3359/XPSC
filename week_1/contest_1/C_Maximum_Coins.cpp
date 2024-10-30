#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, X;
        cin >> N >> X;

        int won = 0;
        for (int i = N - X + 1; i <= N; ++i)
        {
            won += pow(2, i);
        }

        int lost = 0;
        for (int i = 1; i <= N - X; ++i)
        {
            lost += pow(2, i);
        }

        cout << won - lost << endl;
    }
    return 0;
}
