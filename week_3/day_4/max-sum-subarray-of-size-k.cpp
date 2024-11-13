#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSumSubarrayOfSizeK(const vector<int>& arr, int k) {
    int n = arr.size();
    if (n < k) {
        return -1;
    }

    // Initialize variables as long long for larger range support
    long long windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    long long maxSum = windowSum;

    for (int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    vector<int> arr = {100, 200, 300, 400};
    int k = 2;
    cout << "Maximum sum of a subarray of size " << k << " is " << maxSumSubarrayOfSizeK(arr, k) << endl;
    return 0;
}
