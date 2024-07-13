#include<bits/stdc++.h>
using namespace std;
string timeConversion(string s){
    int hours = stoi(s.substr(0,2));
    string meridiem = s.substr(8,2);

    if(meridiem == "AM" && hours == 12){
        return "00" + s.substr(2,6);
    }
    else if(meridiem == "PM" && hours != 12){
        hours = (hours+12) % 24;
        return to_string(hours) + s.substr(2,6);
    }
    else {
        return s.substr(0,8);
    }
}
int main()
{
    string s;
    cin >> s;

    string find_inter_time = timeConversion(s);
    cout << find_inter_time <<endl;
    return 0;
}