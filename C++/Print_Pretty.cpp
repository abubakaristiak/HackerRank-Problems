#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T;
    cin >> T;

    cout << setiosflags(ios::uppercase);
    cout << setw(0xf) << internal;

    while (T--) {
        double A, B, C;
        cin >> A >> B >> C;

        // Print A: hex lowercase with 0x prefix
        cout << nouppercase << hex << showbase
             << left << (long long)A << endl;

        // Print B: +/-, 2 decimal places, right aligned, width 15, underscores
        cout << dec << right << setw(15) << setfill('_')
             << showpos << fixed << setprecision(2)
             << B << endl;

        // Print C: scientific, 9 decimals, uppercase E
        cout << scientific << uppercase
             << noshowpos << setprecision(9)
             << C << endl;
    }

    return 0;
}
