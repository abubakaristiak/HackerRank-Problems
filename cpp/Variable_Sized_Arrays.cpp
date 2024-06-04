#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,q;
    cin >> row>> q;

    int *ar[row];
    for(int i=0; i<row; i++){
        cin >>col;
        ar[i] = new int[col];
        for(int j=0; j<col; j++){
            cin >> ar[i][j];
        } 

    }
    for(int i=0; i<q; i++){
        cin >> row >> col;
        cout << ar[row][col]<<endl;
    }
    return 0;
}
