// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     cin >> test;
//     while (test--)
//     {
//         double a,b,c;
//         cin >> a>>b>>c;

//         // Format -> A;
//         int inta = static_cast<int>(a);
//         cout << "0x" << hex  << inta <<endl;

//         // Format -> B;
//         cout << setw(15)<<setfill('_')<<right<<fixed<<setprecision(2)<<showpos<<b<<endl;

//         // Format -> C;
//         // cout << uppercase<< scientific<<setprecision(9)<< c<<endl;
//         cout << setiosflags(ios::uppercase) << setiosflags(ios::scientific); 
//         cout << setprecision(9)
//         << scientific << noshowpos << uppercase  
//         << c << endl; 
       
//     }
    
//     return 0;
// }

#include <iostream>
#include <iomanip>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int test;
    cin >> test;
    
    while (test--) {
        double a, b, c;
        cin >> a >> b >> c;
        
        // Format A: Convert a to hexadecimal
        int truncated_a = static_cast<int>(a); // Truncate a
        stringstream hex_stream;
        hex_stream << "0x" << hex << truncated_a;
        string formatted_a = hex_stream.str();
        
        // Format B: Format b with sign, right justified in 15 characters with underscores
        stringstream b_stream;
        b_stream << setw(15) << setfill('_') << fixed << setprecision(2) << showpos << b;
        string formatted_b = b_stream.str();
        
        // Format C: Format c in scientific notation with 9 decimal places, uppercase
        stringstream c_stream;
        c_stream << scientific << uppercase << setprecision(9) << c;
        string formatted_c = c_stream.str();
        
        // Output the formatted results
        cout << formatted_a << endl;
        cout << formatted_b << endl;
        cout << formatted_c << endl;
    }
    
    return 0;
}
