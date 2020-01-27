/*
Given an unsorted array of integers, find a subarray which adds to a given number.
If there are more than one subarrays with the sum as the given number, print any of them.

Examples:

Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Output: Sum found between indexes 2 and 4

Input: arr[] = {10, 2, -2, -20, 10}, sum = -10
Output: Sum found between indexes 0 to 3

Input: arr[] = {-10, 0, 2, -2, -20, 10}, sum = 20
Output: No subarray with given sum exists

*/

#include <bits/stdc++.h>
using namespace std;


void subarrWithGivenSum(int *arr,int n,int target) {
  map <int,int> mp;
  int sum = 0;
  for(int i = 0 ; i  < n; i++) {
    sum += arr[i];
    if(sum == target){
      cout << 0 <<" " << i << endl;
      return ;
    }
    if(mp.find(sum-target) != mp.end()) {
      cout << mp[sum-target]+1 <<" " << i << endl;
      return ;
    }
    mp[sum] = i;
  }
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
    int sum; cin >> sum;
    subarrWithGivenSum(arr,n,sum);
  }
  return 0;
}