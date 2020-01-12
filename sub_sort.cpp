/*
Given an array of integers,

write a method to find indices m and n such that if you sorted
elements m through n, the entire array would be sorted. Minimize n - m (that is, find the smallest
such sequence).

EXAMPLE
lnput:1, 2, 4, 7, 10, 11, 7, 12, 6, 7, 16, 18, 19
Output: (3, 9)

*/

#include <bits/stdc++.h>
using namespace std;

void findIndices(int *arr,int size) {
  int mn = INT_MAX;
  int mx = INT_MIN;
  bool flag = false;

  for(int i = 1 ; i < size; i++) {
    if(arr[i] < arr[i-1]){
      flag = true;
    }
    if(flag)
       mn = min(mn,arr[i]);
  }
  flag = false;
  for(int i = size-2; i >= 0; i--) {
    if(arr[i] > arr[i+1])
      flag = true;
    if (flag)
       mx = max(mx,arr[i]);
  }
  int startIdx = INT_MAX;
  int endIdx = INT_MIN;
  int l,r;
  for(l = 0 ; l < size; l++) {
    if(mn < arr[l])
       break;
  }
  for(r = size-1; r >= 0; r--) {
    if(mx > arr[r]) break;
  }
  if(r-l < 0) cout << "Already sorted\n";
  else cout << l <<" " << r << endl;
}

int main() {

  int test;
  cin >> test;
  while(test--) {
    int size;
    cin >> size;
    int arr[size];
    for(int i = 0 ; i < size; i++) {
      cin >> arr[i];
    }
    findIndices(arr,size);
  }
  return 0;
}
