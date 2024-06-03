#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >>a >> b>>c >>d;

    int ar[4] = {a,b,c,d};
    int mx = ar[0];
    for(int i=1; i<4;i++){
        if(ar[i] > mx){
            mx = ar[i];
        }
    }
    cout << mx;
    return 0;
}