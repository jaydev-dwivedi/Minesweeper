#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("small_input.txt", "r", stdin);
    freopen("small_output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {

        int n, m, mine;
        cin >> n >> m >> mine;
        char a[n][m];
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (cnt < mine)
                {
                    a[i][j] = '*';
                    cnt++;
                }
                else
                {
                    a[i][j] = '.';
                }
            }
        }
        a[n - 1][m - 1] = 'c';

        if ((a[n - 1][m - 2] == '*' || a[n - 2][m - 2] == '*' || a[n - 2][m - 1] == '*') || (((m * n) - mine) < 10 && mine != 0))
            cout << "IMPOSSIBLE\n";
        else
        {

            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {

                    cout << a[i][j];
                }
                cout << endl;
            }
        }
    }
}