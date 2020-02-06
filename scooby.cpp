#include <bits/stdc++.h>
using namespace std;


int gcd(int a,int b) {
    return (b == 0) ? a : gcd(b,a%b);
}
int lcm(int a,int b) {
    return (a*b)/(gcd(a,b));
}
int solve(int n,int a,int b) {
    int cal = lcm(a,b);
    cout <<"lcm : " << cal << endl;
    cout << "gcd : " << gcd(a,b) << endl;
    return n/cal;
}
int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int n,a,b;
        cin >> n;// >> a >> b;
        cout << int(log2(n)) << endl;
      //  cout << solve(n,a,b) << endl;
        /*int arr[n];
        for(int i = 0 ; i < n; i++) {
            cin >> arr[i];
        }
        int gc = arr[0];
        for(int i =1; i < n; i++) {
            gc = gcd(gc,arr[i]);
            cout << gc <<" ";
        }
        if(gc == 1) cout << 0 << endl;
        else cout << endl;
        cout << "array gcd  : " << gc << endl;*/
    }
    return 0;
}
