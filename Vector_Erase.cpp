#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0; i<n;i++){
        cin>> v[i];
    }
    int x;
    cin >> x;
    int l,r;
    cin >> l>> r;
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+l-1,v.begin()+r-1);
    cout << v.size()<<endl;
    for(int i=0; i<v.size();i++){
        cout << v[i]<<" ";
    }
    return 0;
}