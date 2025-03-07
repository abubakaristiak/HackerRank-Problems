//https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3;
    int m=3;
    int ar[n]; int ar1[m];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    for(int i=0; i<m; i++){
        cin >> ar1[i];
    }
    int alice_point = 0;
    int bob_point = 0;
    for(int i=0; i<n; i++){
        if(ar[i]>ar1[i]){
            alice_point++;
        }
        else if(ar1[i]> ar[i]){
            bob_point++;
        }      
    }
    cout << alice_point<<" " <<bob_point<<endl;
    return 0;
}   