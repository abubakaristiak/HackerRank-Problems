#include<bits/stdc++.h>
using namespace std;
void swapCharacter(string& a, string& b){
    swap(a[0],b[0]);
}
int main()
{
    string a,b,c;
    cin >> a >> b;
    int a_len = a.length();
    int b_len = b.length();
    c = a+b;
    cout<<a_len<<" " << b_len << endl;
    cout << c<<endl;
    swapCharacter(a,b);
    cout <<a <<" "<<b;
    return 0;
}