/*
||-----------------------------------||
||        Abu Bakar Istiak           ||
||     Chattogram Polytechnic        ||
||        Department of CST          ||
||    abubakar119147@gmail.com       ||
||-----------------------------------||
*/
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ull unsigned long long
#define pi pair<ll, ll>
#define vi vector<ll>
#define vpi vector<pi>
#define pb push_back
#define endl "\n"
#define sp " "
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define cyes cout << "Yes\n"
#define cno cout << "No\n"
#define sz(x) (ll)(x).size()
#define minus cout << -1 << endl
#define zero cout << 0 << endl
#define MAX 100000
#define MOD 998244353
#define afor(i,a,b) for (ll i = (a); i < (b); ++i)
#define rfor(i,a,b) for (ll i = (a); i >= (b); --i)
#define asort(v) sort((v).begin(), (v).end())
#define rsort(v) sort((v).begin(), (v).end(), greater<>())
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve() {
    string s; cin >> s;
    int n=s.size();
    int i=n-2;
    
    while (i>=0 && s[i]>=s[i+1])
    {
        i--;
    }
    if(i==-1){
        cout << "no answer" << endl;
    }else{
        int j=n-1;
        while (s[j]<=s[i])
        {
            j--;
        }
        swap(s[i],s[j]);
        reverse(s.begin()+i+1, s.end());
        cout << s << endl;
    }
    
}


int main() {
    fast();
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;

    // Alhamdulillah
}



/*
another approach:
#include <bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test--) {
        string inp;
        cin >> inp;
        if (next_permutation(inp.begin(), inp.end()) == false ) {
            cout << "no answer" << endl;
        }
        else {
            cout << inp << endl;
        }
    }
    return 0;
}
*/