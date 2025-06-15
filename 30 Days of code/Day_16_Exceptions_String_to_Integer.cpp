#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;

    try {
        int value = stoi(s);
        cout << value << endl;
    } catch (exception& e) {
        cout << "Bad String" << endl;
    }

    return 0;
}
