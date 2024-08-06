#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(int n)
{
    int c1, c2;
    c1 = n / 3;
    c2 = c1;
    int rem = n % 3;

    if (rem == 1)
    {
        c1 += 1;
    }

    if (rem == 2)
    {
        c2 += 1;
    }
    cout << c1 << " " << c2 << "\n";
    return;
}
int main()
{
    vector<int> a;
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        solve(c);
    }
    return 0;
}