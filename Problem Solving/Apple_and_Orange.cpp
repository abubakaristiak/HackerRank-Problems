#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    vector<int> apples(m), oranges(n);
    for (int &x : apples) cin >> x;
    for (int &x : oranges) cin >> x;

    int appleCount = 0, orangeCount = 0;

    for (int d : apples)
        if (a + d >= s && a + d <= t)
            appleCount++;

    for (int d : oranges)
        if (b + d >= s && b + d <= t)
            orangeCount++;

    cout << appleCount << endl;
    cout << orangeCount << endl;

    return 0;
}
