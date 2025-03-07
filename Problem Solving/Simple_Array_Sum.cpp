// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int ar[n];
//     for(int i=0; i<n; i++){
//         cin >> ar[i];
//     }
//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum = sum + ar[i];
//     }
//     cout << sum <<endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int simpleArraySum(int *ar,int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += ar[i];
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int s = simpleArraySum(ar,n);
    cout << s <<endl;
    return 0;
}