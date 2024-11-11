#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int calculate_sum(vector<vector<int>> vc, int n, int m, int x, int y)
{
    int sum = 0;
    sum += vc[x][y];

    int i = x, j = y;
    while (i >= 0 && j >= 0)
    {
        if (i != x || j != y)
        {
            sum += vc[i][j];
        }
        i--;
        j--;
    }

    i = x, j = y;
    while (i >= 0 && j < m)
    {
        if (i != x || j != y)
        {
            sum += vc[i][j];
        }
        i--;
        j++;
    }

    i = x, j = y;
    while (i < n && j >= 0)
    {
        if (i != x || j != y)
        {
            sum += vc[i][j];
        }
        i++;
        j--;
    }

    i = x, j = y;
    while (i < n && j < m)
    {
        if (i != x || j != y)
        {
            sum += vc[i][j];
        }
        i++;
        j++;
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> vc(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> vc[i][j];
            }
        }

        int max_sum = 0;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                max_sum = max(max_sum, calculate_sum(vc, n, m, i, j));
            }
        }

        cout << max_sum << endl;
    }

    return 0;
}

/*

4 4
1 2 2 1
2 4 2 4
2 2 3 1
2 4 2 4

*/