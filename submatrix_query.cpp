#include <bits/stdc++.h>
using namespace std;

struct Q{
    int x,y;
};
int main() {

    int t ;
    cin >> t ;
    while(t--) {
        int row,col;
        cin >> row >> col;
        int mat[row][col];
        for(int i = 0 ; i < row; i++) {
            for(int j = 0 ;j  < col; j++) {
                cin >> mat[i][j];
            }
        }
        int tmp[row][col];
        tmp[0][0] = mat[0][0];
        for(int i = 1 ; i < col; i++) {
                tmp[0][i] =  tmp[0][i-1] + mat[0][i];
        }
        tmp[0][0] = mat[0][0];
        for(int j = 1; j < col; j++) {
            tmp[j][0] =mat[j][0];
        }

        for(int i = 1; i < row; i++) {
            for(int j = 1; j < col; j++) {
                tmp[i][j] = tmp[i][j-1] + mat[i][j];
            }
        }
        for(int i = 0; i < row; i++) {
            for(int j = 0 ; j < col; j++) {
                cout << tmp[i][j] <<" ";
            }
            cout << endl;
        }cout <<"kl";
        int qr;
        cin >> qr;
        while(qr){
            Q q1,q2;
            cin >> q1.x >> q2.y;
            cin >> q2.x >> q2.y;
            if()

        }
    }
    return 0;
}
