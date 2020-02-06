#include <bits/stdc++.h>
using namespace std;


// given array with distinct elements of size n
// all the elements are permutation of 0 to n-1
// find max chunks that can be splitted to sort the entire array

int maxChunk(int *arr,int n) {
    if(n == 0) return -1;
  //  if(n == 1) return 1;
    int cntChunks = 0;
    int mx = INT_MIN;
    for(int i = 0 ; i < n; i++) {
        mx = max(mx,arr[i]);
        //cout << "mx : " << mx <<" ";
        if(mx == i){
            cntChunks++;
        }
    }
    return (cntChunks == 0) ? 1 : cntChunks;
}

// if duplicate elements are given
// method 1 tc = O(nlogn),sc = (n)
int cntChunksDup1(vector <int> &arr) {
    vector <int> tmp = arr;
    int sum1 = 0,sum2 = 0;
    sort(tmp.begin(),tmp.end());
    for(int i = 0 ; i < arr.size(); i++) {
        sum1 += tmp[i];
        sum2 += arr[i];
        if(sum1 == sum2)
            cnt++;
    }
    return cnt;
}
//method 2 tc = O(n),sc = O(n)
int cntChunksDup2(int *arr,int n) {
    int mn[n];
    int mx[n];
    mx[0] = arr[0];
    for(int i = 1; i < n; i++) {
        mx[i] = max(arr[i],mx[i-1]);
    }
    mn[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--) {
        mn[i] = min(arr[i],mn[i+1]);
    }
    int cnt = 1;
    for(int i = 1; i < n; i++) {
        if(mn[i] >= mx[i-1])
            cnt++;
    }
    return cnt;
}
int main(){
    int t;
    cin >> t ;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n ;i++) {
            cin >> arr[i];
        }
        cout << maxChunk(arr,n) << endl;
    }
    return 0;
}
