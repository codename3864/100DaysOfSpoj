#include <bits/stdc++.h>
using namespace std;


int gcd(int a,int b) {
    return (b == 0) ? a : gcd(b,a%b);
}
int solve(int *arr,int n) {
    int pre[n+1];
    int post[n+1];
    pre[0] = arr[0];
    for(int i = 1; i < n ; i++) {
        pre[i] = gcd(pre[i-1],arr[i]);
    }
    post[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--) {
        post[i] = gcd(post[i+1],arr[i]);
    }
    int res = max(post[1],pre[n-1]);
    for(int i = 1 ; i < n-1; i++) {
        res = max(res,gcd(pre[i-1],post[i+1]));
    }
    return res;
}

int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int n ;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n ; i++) {
            cin >> arr[i];
        }cout << solve(arr,n) << endl;
    }
    return 0;
}
