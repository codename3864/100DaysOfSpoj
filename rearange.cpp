#include <bits/stdc++.h>
using namespace std;

void rearrange(int *arr,int n) {
    int tmp[n];
    cout << "Before arrangement : ";
    for(int i = 0 ; i < n ; i++) {
        cout << arr[i] <<" ";
    }cout << endl;
    for(int i = 0 ; i < n; i++) {
        tmp[arr[i]] = i;
    }
    for(int i = 0 ; i < n; i++) {
        arr[i] = tmp[i];
    }cout << "After arrangement : ";
    for(int i = 0 ; i < n; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t ;
    while(t--) {
        int n ;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++) {
            cin >> arr[i];
        }
        rearrange(arr,n);
    }
    return 0;
}
