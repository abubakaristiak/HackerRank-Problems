// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
// public:
//     int mark_1;
//     int mark_2;
//     int mark_3;
//     int mark_4;
//     int mark_5;
//     void input(){
//         cin >> mark_1 >> mark_2 >> mark_3 >> mark_4 >> mark_5;
//     }
//     int count_score(){
//         return mark_1+mark_2+mark_3+mark_4+mark_5;
//     }
// };
// int main()
// {
//     int n;
//     cin >> n;
//     Student a[n];
//     for(int i=0; i<n; i++){
//         a[i].input();
//     }

//     int kristen_score = a[0].count_score();
//     int count=0;
//     for(int i=0; i<n; i++){
//         if(a[i].count_score() > kristen_score){
//             count++;
//         }
//     }
//     cout << count << endl;
//     return 0;
// }


// According to HackerRank console
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
class Student
{
public:
    int mark_1;
    int mark_2;
    int mark_3;
    int mark_4;
    int mark_5;
    void input(){
        cin >> mark_1 >> mark_2 >> mark_3 >> mark_4 >> mark_5;
    }
    int calculateTotalScore(){
        return mark_1+mark_2+mark_3+mark_4+mark_5;
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
