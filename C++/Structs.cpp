#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll_1;
    string name_1;
    string name_2;
    int roll_2;

};
int main()
{
    Student a;
    cin >> a.roll_1 >> a.name_1 >> a.name_2 >> a.roll_2;
    cout << a.roll_1 << " "<<a.name_1 << " " << a.name_2 <<" "<<a.roll_2<<endl;

    return 0;
}