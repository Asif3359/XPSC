#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        long long min_val = min(n, m);
        long long max_sum = n + m + min_val - 2;

        cout << ((max_sum+1)/2)+1 << endl;
    }

    return 0;
}
