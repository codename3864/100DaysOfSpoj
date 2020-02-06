#include<bits/stdc++.h>
using namespace std;
#define R 1001
#define C 1001
// find sum of all possible sub matrices

int sumSubMat(int mat[][C],int row,int col) {

    int sum = 0 ;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            int topL = (i+1)*(j+1);
            int bottomR = (row-i)*(col-j);
            sum += topL*bottomR*mat[i][j];
        }
    }
    return sum;
}
int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int row,col;
        cin >> row >> col;
        int mat[row][col];
        for(int  i = 0 ; i < row; i++) {
            for(int j = 0 ; j < col; j++) {
                cin >> mat[i][j];
            }
        }
        cout << sumSubMat(mat,row,col) << endl;
    }
    return 0;
}
