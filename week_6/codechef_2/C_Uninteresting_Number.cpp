#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool canBeDivisibleBy9(const string &n)
{
    int sum = 0;
    for (char digit : n)
    {
        sum += digit - '0'; // Convert char to int
    }

    // Check if the current sum is divisible by 9
    if (sum % 9 == 0)
    {
        return true;
    }

    // Check if we can make the sum divisible by 9
    // We can replace digits 3, 6, or 9 to 0 (mod 9)
    // or digits 4, 5 to 7 (mod 9)
    // or digits 2, 7 to 4 (mod 9)
    // or digits 1, 8 to 1 (mod 9)

    // If we have a digit that can be squared to 0 (mod 9)
    for (char digit : n)
    {
        if (digit == '3' || digit == '6' || digit == '9')
        {
            return true; // We can make the sum divisible by 9
        }
    }

    // If we have a digit that can be squared to 7 (mod 9)
    for (char digit : n)
    {
        if (digit == '4' || digit == '5')
        {
            return true; // We can adjust the sum
        }
    }

    // If we have a digit that can be squared to 4 (mod 9)
    for (char digit : n)
    {
        if (digit == '2' || digit == '7')
        {
            return true; // We can adjust the sum
        }
    }

    // If we have a digit that can be squared to 1 (mod 9)
    for (char digit : n)
    {
        if (digit == '1' || digit == '8')
        {
            return true; // We can adjust the sum
        }
    }

    return false; // No possible transformation found
}

int main()
{
    int t;
    cin >> t;
    vector<string> results;

    while (t--)
    {
        string n;
        cin >> n;
        if (canBeDivisibleBy9(n))
        {
            results.push_back("YES");
        }
        else
        {
            results.push_back("NO");
        }
    }

    for (const string &result : results)
    {
        cout << result << endl;
    }

    return 0;
}