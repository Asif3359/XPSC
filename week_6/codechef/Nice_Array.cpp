#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    
    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long min_sum = 0, max_sum = 0;
    
    for(int i = 0; i < n; i++) {
        long long floor_val = a[i] / k;
        long long ceil_val = (a[i] + k - 1) / k;
        if(a[i] < 0) {
            ceil_val = a[i] / k;
            floor_val = (a[i] - k + 1) / k;
        }
        
        min_sum += floor_val;
        max_sum += ceil_val;
    }
    
    cout << (min_sum <= 0 && 0 <= max_sum ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
