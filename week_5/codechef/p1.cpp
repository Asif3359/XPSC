#include <iostream>
using namespace std;

int main()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;
    int total = Y * Z;
    if (total > X)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << X - total << endl;
    }
    return 0;
}
