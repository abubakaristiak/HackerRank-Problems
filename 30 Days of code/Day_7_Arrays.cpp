#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    for(int i=n-1; i>=0; i--){
        cout << ar[i] <<" ";
    }
    return 0;
}