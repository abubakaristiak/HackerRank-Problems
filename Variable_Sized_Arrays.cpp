#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int row = 0, col = 0, q = 0;
    cin >> row >> q;

    int* arr[row];

    for(int i=0; i<row; ++i){

        cin >> col;
        arr[i] = new int[col];

        for(int j=0; j<col; ++j) cin >> arr[i][j];

    }

    for(int i=0; i<q; ++i){
        cin >> row >> col;
        cout << arr[row][col] << endl;
    }

    return 0;
}

