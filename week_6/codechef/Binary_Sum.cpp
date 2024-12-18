#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;

        
        int max_ones = (N + 1) / 2; 
        int min_ones = N / 2;       

        if (K >= min_ones && K <= max_ones)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
