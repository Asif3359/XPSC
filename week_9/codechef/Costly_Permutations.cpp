#include <bits/stdc++.h>
using namespace std;

int findcl(int start, const vector<int> &vc, vector<bool> &visit)
{
    int current = start;
    int length = 0;
    while (!visit[current])
    {
        visit[current] = true;
        current = vc[current] - 1;
        length++;
    }
    return length;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int N;
        cin >> N;
        vector<int> vc(N);
        for (int i = 0; i < N; i++)
        {
            cin >> vc[i];
        }

        vector<bool> visit(N, false);
        vector<int> vc2;

        for (int i = 0; i < N; ++i)
        {
            if (!visit[i])
            {
                int cl = findcl(i, vc, visit);
                vc2.push_back(cl);
            }
        }

        if (vc2.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }

        priority_queue<int, vector<int>, greater<int>> minHeap;
        for (int length : vc2)
        {
            minHeap.push(length);
        }

        long long ans = 0;
        while (minHeap.size() > 1)
        {
            int first = minHeap.top();
            minHeap.pop();
            int second = minHeap.top();
            minHeap.pop();
            ans += first + second;
            minHeap.push(first + second);
        }

        cout << ans << endl;
    }

    return 0;
}
