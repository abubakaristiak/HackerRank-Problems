#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    int d, m;
    cin >> d >> m;

    int count = 0;
    for (int i = 0; i <= n - m; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += s[i + j];
        }
        if (sum == d) count++;
    }

    cout << count << endl;
    return 0;
}
