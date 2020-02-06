#include <bits/stdc++.h>
using namespace std;


// wave array

void waveArray(int *arr,int n) {
    sort(arr,arr+n);
    vector <int> v;
    for(int i = 0; i < n-1; i+=2) {
            swap(arr[i],arr[i+1]);
    }
    for(int i = 0 ; i < n ;i++) {
        cout << arr[i] <<" ";
    }
}
int main() {
    int t ;
    cin >> t ;
    while(t--) {
        int n ;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++) {
            cin >> arr[i];
        }
        waveArray(arr,n);
       /* int j = 0 ;
        for(int i = 0 ; i < n ; i++) {
                arr[arr[i]%n] += i*n;
        }
        for(int i = 0 ; i < n; i++) {
            arr[i] /= n;
        }
        for(int i = 0 ; i < n ; i++) {
            cout << arr[i] <<" ";
        }*/
        cout << endl;
    }

    return 0;
}
