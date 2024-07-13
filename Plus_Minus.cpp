// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; cin >> n;
//     int ar[n];

//     for(int i=0; i<n; i++){
//         cin >> ar[i];
//     }

//     int pos=0;
//     int neg=0;
//     int zero=0;
//     for(int i=0; i<n; i++){
//         if(ar[i]<0){
//             neg++;
//         }
//         else if(ar[i]>0){
//             pos++;
//         }
//         else if(ar[i]==0){
//             zero++;
//         }
//     }
//     double val1 = (double) pos/n;
//     double val2 = (double) neg/n;
//     double val3 = (double) zero/n;

//     cout << fixed << setprecision(6)<< val1<<endl;
//     cout << fixed << setprecision(6)<< val2<<endl;
//     cout << fixed << setprecision(6)<< val3<<endl;
//     return 0;
// }


#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

void plusMinus(const vector<int>& arr) {
    int n = arr.size();
    int pos = 0, neg = 0, zero = 0;

    // Count the number of positive, negative, and zero elements
    for (int num : arr) {
        if (num > 0) {
            pos++;
        } else if (num < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    // Calculate the ratios
    double posRatio = static_cast<double>(pos) / n;
    double negRatio = static_cast<double>(neg) / n;
    double zeroRatio = static_cast<double>(zero) / n;

    // Print the ratios with six decimal places
    cout << fixed << setprecision(6) << posRatio << endl;
    cout << fixed << setprecision(6) << negRatio << endl;
    cout << fixed << setprecision(6) << zeroRatio << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    // Read the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the plusMinus function
    plusMinus(arr);

    return 0;
}
