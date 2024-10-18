//https://www.hackerrank.com/challenges/cpp-maps/problem?isFullScreen=true

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    map<string, int> mp;
    while (t--)
    {
        int x; cin>>x;
        string name;
        int mark=0;
        if(x==1){
            cin>>name;
            cin>>mark;
            mp[name] += mark;
        }
        else if(x==2){
            cin>>name;
            mp.erase(name);
        }
        else if(x==3){
            cin>>name;
            cout<< mp[name] << endl;
        }
    }

    
    return 0;
}