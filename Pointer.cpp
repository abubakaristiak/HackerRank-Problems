#include<bits/stdc++.h>
using namespace std;
void prt(int &a, int &b){
    int sum = a+b;
    int absolute_value = abs(a-b);
    a = sum;
    b = absolute_value;

}
int main()
{
    int a,b;
    cin >> a >> b;
    prt(a,b);
    cout << a <<endl;
    cout << b <<endl;
    return 0;
}