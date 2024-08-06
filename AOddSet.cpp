#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
void solveTut()
{
    int n, cnt[2] = {0};
    cin >> n;
    for (int i = 1, x; i <= n * 2; i++)
        cin >> x, cnt[x % 2]++;
    if (cnt[0] == n)
        puts("Yes");
    else
        puts("No");
}
void solve(int n)
{
    int size = n * 2;
    unordered_map<int, int> mp;

    int odd = 0, even = 0;
    while (size--)
    {
        int t;
        cin >> t;
        if (t % 2 == 0)
        {
            even += 1;
        }
        else
        {
            odd += 1;
        }

        mp[t]++;
    }

    for (const auto &el : mp)
    {
        if (el.second > n)
        {
            cout << "No\n";
            return;
        }

        if (el.second == n)
        {
            if (odd != even)
            {
                cout << "No\n";
            }
            else
            {
                cout << "Yes\n";
            }
            return;
        }
    }

    if (odd == even)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }

    return 0;
}