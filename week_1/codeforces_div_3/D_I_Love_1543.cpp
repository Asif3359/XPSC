#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> vc(n, vector<char>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> vc[i][j];
            }
        }

        string target = "1543";
        int count = 0;

        for (int layer = 0; layer < n / 2; layer++)
        {
            string strSt = "";

            // Top row (left to right)
            for (int j = layer; j < m - layer; j++)
            {
                strSt += vc[layer][j];
            }
            // Right column (top to bottom)
            for (int i = layer + 1; i < n - layer - 1; i++)
            {
                strSt += vc[i][m - layer - 1];
            }
            // Bottom row (right to left)
            for (int j = m - layer - 1; j >= layer; j--)
            {
                strSt += vc[n - layer - 1][j];
            }
            // Left column (bottom to top)
            for (int i = n - layer - 2; i > layer; i--)
            {
                strSt += vc[i][layer];
            }

            string finalStr = strSt + strSt.substr(0, 3);

            int pos = finalStr.find(target);
            while (pos != string::npos && pos < strSt.size())
            {
                count++;
                pos = finalStr.find(target, pos + 1);
            }
        }

        cout << count << endl;
    }

    return 0;
}
