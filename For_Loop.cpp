#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>> a;
    cin>> b;

    if(a==1){
        cout << "one" << endl;
    }
    else if(a==2){
        cout << "two" << endl;
    }
    else if(a==3){
        cout << "three" << endl;
    }
    else if(a==4){
        cout << "four" << endl;
    }
    else if(a==5){
        cout << "five" << endl;
    }
    else if(a==6){
        cout << "six" << endl;
    }
    else if(a==7){
        cout << "seven" << endl;
    }
    else if(a==8){
        cout << "eight" << endl;
    }
    else if(a==9){
        cout << "nine" << endl;
    }
    else{
        cout << "nine"<< endl;
    }



    if(b==1){
        cout << "one" << endl;
    }
    else if(b==2){
        cout << "two" << endl;
    }
    else if(b==3){
        cout << "three" << endl;
    }
    else if(b==4){
        cout << "four" << endl;
    }
    else if(b==5){
        cout << "five" << endl;
    }
    else if(b==6){
        cout << "six" << endl;
    }
    else if(b==7){
        cout << "seven" << endl;
    }
    else if(b==8){
        cout << "eight" << endl;
    }
    else if(b==9){
        cout << "nine" << endl;
    }
    else{
        cout << "nine"<< endl;
    }
    
    if(a%2==0){
        cout << "even"<<endl;
    }
    else{
        cout << "odd"<<endl;
    }

    if(b%2==0){
        cout << "even"<<endl;
    }
    else{
        cout << "odd"<<endl;
    }
    return 0;
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int a, b;
    string represent[10] = {"zero", "one", "two", "three", "four",\
    	"five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        
        if(i > 9) {
            if(i % 2 == 0)
                cout << "even\n";
            else cout << "odd\n";
        }
        else {
            cout << represent[i]<<endl;
        }
    }
    return 0;
}