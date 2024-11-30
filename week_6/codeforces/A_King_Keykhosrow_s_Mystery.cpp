#include <iostream>
#include <numeric> 
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int m = lcm(a, b);
        cout << m << endl;
    }
    return 0;
}
