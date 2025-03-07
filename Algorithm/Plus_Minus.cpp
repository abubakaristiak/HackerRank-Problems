/*
 * Bismillahir Rahmanir Raheem
 *
 * * * * Coder   : abubakaristiak
 * * * * Created : 2025-03-07 || 14:59:14
 * * * * File    : Plus_Minus.cpp
*/


#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define pi pair<ll, ll>
#define asort(v) sort(v.begin(), v.end())
#define rsort(v) sort(v.begin(), v.end(), greater<>())
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define endl "\n"
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace __gnu_pbds;
using namespace std;

template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve()
{
    int n; cin >> n;
    int ar[n+1];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    int zeros=0, neg=0, pos=0;
    for(int i=0; i<n; i++){
        if(ar[i]==0){
            zeros++;
        }else if(ar[i]<0){
            neg++;
        }else{
            pos++;
        }
    }
    cout << fixed << setprecision(6);
    cout << 1.0*pos/n << endl;
    cout << 1.0*neg/n << endl;
    cout << 1.0*zeros/n << endl;

}


int main()
{
    fast();
    int t=1;
    while (t--) {
        solve();
    }

    return 0;


// Alhamdulillah
}