#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (m >= (n + 1) / 2)
    {
        cout << "NEWBIE" << endl;
    }
    else
    {
        cout << "PRO" << endl;
    }

    return 0;
}