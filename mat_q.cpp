#include <bits/stdc++.h>
using namespace std;

struct Q{
    int i,j;
    int x,y;
};
int main() {

    int t ;
    cin >> t ;
    while(t--) {
        int row,col;
        cin >> row >> col;
        int mat[row][col];
        for(int i = 1 ; i <= row; i++) {
            for(int j = 1; j <= col; j++) {
                cin >> mat[i][j];
            }
        }
        int tmp[row][col];
        tmp[1][1] = mat[1][1];
        for(int i = 2 ; i <= col; i++) {
                tmp[1][i] =  tmp[1][i-1] + mat[1][i];
        }

        for(int i = 1; i <= row; i++) {
            tmp[i][1] = mat[i][1];
        }

        for(int i = 2; i <= row; i++) {
            for(int j = 2; j <= col; j++) {
                    tmp[i][j] = tmp[i][j-1]+mat[i][j];
            }
        }
        for(int i =2; i <= row; i++) {
            for(int j = 1; j <= col; j++) {
                    tmp[i][j] = tmp[i-1][j] + tmp[i][j];
            }
        }
        for(int i = 1; i <= row; i++) {
            for(int j = 1; j<= col ;j++){
                cout << tmp[i][j] <<" ";
            }cout << endl;
        }

        cout <<"kl";
        int qr;
        cin >> qr;
        while(qr){
            Q q1;
            cin >> q1.i >> q1.j;
            cin >> q1.x >> q1.y;
            if(q1.i > 1 && q1.j > 1){
                int s1 = tmp[q1.x][q1.y];
                int s2 = tmp[q1.x][q1.j-1];
                int s3 = tmp[q1.i-1][q1.y];
                int s4 = tmp[q1.i-1][q1.i-1];
                cout << s1 <<" " << s2 <<" " << s3 <<" " << s4 << endl;
                cout << s1 + s4 -(s2+s3)<< endl;

            }
            else if(q1.i > 1){
                    cout << tmp[q1.x][q1.y]-tmp[q1.i-1][q1.y] << endl;
                cout << "h1\n";

            }else if(q1.j > 1) {
                    cout << tmp[q1.x][q1.y]-tmp[q1.x][q1.j-1] << endl;
                    cout << "h2\n";
            }else if(q1.i == 1 && q1.j == 1) cout << tmp[q1.x][q1.y] << endl;
        }
    }
    return 0;
}

