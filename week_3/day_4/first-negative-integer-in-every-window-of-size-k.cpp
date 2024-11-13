#include <iostream>
#include <vector>
using namespace std;

vector<int> firstNegativeInWindow(const vector<int>& arr, int k) {
    vector<int> result;
    
    // Loop to slide the window
    for (int i = 0; i <= arr.size() - k; i++) {
        bool foundNegative = false;
        
        // Check each element in the window
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                result.push_back(arr[j]);
                foundNegative = true;
                break;  // Stop once we find the first negative
            }
        }
        
        // If no negative was found, append 0 to the result
        if (!foundNegative) {
            result.push_back(0);
        }
    }

    return result;
}

int main() {
    vector<int> arr = {-8, 2, 3, -6, 10};
    int k = 2;
    vector<int> result = firstNegativeInWindow(arr, k);

    // Print the result
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
