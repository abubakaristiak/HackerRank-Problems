#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int ar[5];
    for(int i=0; i<5; i++){
        cin >> ar[i];
    }
    sort(ar,ar+5);
    long long int min_sum = 0;
    for(int i=0; i<5-1; i++){
        min_sum += ar[i];
    }
    long long int max_sum = 0;
    for(int i=1; i<5; i++){
        max_sum +=ar[i];
    }
    cout << min_sum << " "<< max_sum <<endl;
    return 0;
}