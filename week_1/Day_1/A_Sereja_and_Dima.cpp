#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cards(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    int Sereja = 0, Dima = 0;
    int left = 0, right = n - 1;
    bool serejaTurn = true;

    while (left <= right)
    {
        if (cards[left] > cards[right])
        {
            if (serejaTurn)
            {
                Sereja += cards[left];
            }
            else
            {
                Dima += cards[left];
            }
            left++;
        }
        else
        {
            if (serejaTurn)
            {
                Sereja += cards[right];
            }
            else
            {
                Dima += cards[right];
            }
            right--;
        }
        serejaTurn = !serejaTurn;
    }

    cout << Sereja << " " << Dima << endl;
    return 0;
}
