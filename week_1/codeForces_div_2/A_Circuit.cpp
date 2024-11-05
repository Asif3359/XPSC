#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> switches(2 * n);
        int countOn = 0;

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> switches[i];
            if (switches[i] == 1)
            {
                countOn++;
            }
        }

        // Calculate minimum number of lights that can be on
        int minOn = countOn % 2; // 1 if odd, 0 if even

        // Calculate maximum number of lights that can be on
        int maxOn;
        if (countOn == 2 * n)
        {
            // All switches are on and even
            maxOn = 0;
        }
        else
        {
            maxOn = min(countOn, n);
        }

        cout << minOn << " " << maxOn << endl;
    }

    return 0;
}
