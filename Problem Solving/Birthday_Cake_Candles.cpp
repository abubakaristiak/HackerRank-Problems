#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(ar[i]>max){
            max = ar[i];
        }
    }

    int count = 0;
    for(int i=0; i<n; i++){
        if(ar[i] == max){
            count++;
        }
    }
    cout << count <<endl;
    
    return 0;
}