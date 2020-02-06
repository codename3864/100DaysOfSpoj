#include <bits/stdc++.h>
using namespace std;
#define R 101
#define C 101
int mat[R][C];
int searchEle(int row,int col,int x) {
    int i = 1,j = col;
    while(i  <= row && j >= 1) {
            if(mat[i][j] == x) {
                cout << "n found at :" << i <<"," << j;
                return i;
            }
            if(mat[i][j] > x) {
                j--;
            }
            else {
                i++;
            }
    }cout << "not found\n";
    return -1;
}


int main() {
    vector<vector<int> > vect{ { 1, 2, 3 ,1},
                               { 4, 5, 6 ,1},
                               { 7, 8, 9 ,1} };
    cout << vect[0].size() <<" "  << vect.size() << endl;



    int t ;
    cin >> t ;
    while(t--) {
        int row,col;
        cin >> row >> col;
        for(int  i = 1 ; i <= row; i++) {
            for(int j = 1 ; j <= col; j++) {
                cin >> mat[i][j];
            }
        }

        int q; cin >> q;
        while(q--){
        int x ;
        cin >> x;
        cout << searchEle(row,col,x) << endl;
        }
    }
    return 0;
}
