//https://www.hackerrank.com/challenges/diagonal-difference/problem?isFullScreen=true
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col; cin >> row; col = row;
    int ar[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            cin >> ar[i][j];
        }
    }
    int primary_diagonal = 0;
    int secondary_diagonal = 0;

    for(int i=0; i<row; i++){
        for(int j=0; j<row; j++){
            if(i==j){
                primary_diagonal += ar[i][j];
            }
            if(i+j == row-1){
                secondary_diagonal += ar[i][j];
            }
        }
    }
    int total_diff = abs(primary_diagonal-secondary_diagonal);
    cout << total_diff<<endl;


    return 0;
}