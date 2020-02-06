#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {
    return (b == 0) ? a : gcd(b,a%b);
}
int solve(int a,int b) {
    if(a == 0 || b == 0) return gcd(a,b);
    else return 2*gcd(a,b);

   /* int mn = INT_MAX;
    int mx = INT_MIN;
    cout << "gcd : " << gcd(a,b) << endl;
    while(1) {
        if(a == b || a == 0 || b == 0) break;
        mn = min(a,b);
        mx = max(a,b);
        int tmp = mx-mn;
        a = mn;
        b = tmp;
    }
    cout << a <<" " << b << endl;
    return a+b;*/
}

int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int a,b;
        cin >> a >> b;
        cout << solve(a,b) << endl;
    }
    return 0;
}
