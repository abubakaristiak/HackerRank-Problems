#include <iostream>
#include <set>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    set<int> s;
    while (q--) {
        int type, x;
        cin >> type >> x;
        
        if (type == 1) {
            // Add x to the set
            s.insert(x);
        } else if (type == 2) {
            // Erase x from the set
            s.erase(x);
        } else if (type == 3) {
            // Check if x is present in the set
            auto itr = s.find(x);
            if (itr != s.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    
    return 0;
}
