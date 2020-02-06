#include <bits/stdc++.h>
using namespace std;


bool overlapRect(int a,int b,int c,int d,int e,int f,int g,int h) {
    //if(a >  || e > c) return false;
    //if(b < h || f < d) return false;
    //return true;
    return (a < g && e < c && b < h && f < d);
}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int e,f,g,h;
        cin >> e >> f >> g >> h ;
        cout << overlapRect(a,b,c,d,e,f,g,h) << endl;
    }
    return 0;
}
