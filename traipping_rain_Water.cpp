/*

Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where
the width of each block is 1. Compute how much water can be trapped in between blocks after raining.

Constraints:
1 <= T <= 100
3 <= N <= 107
0 <= Ai <= 108

Example:
Input:
2
4
7 4 0 9
3
6 9 9

Output:
10
0

Explanation:
Testcase 1: Water trapped by block of height 4 is 3 units, block of height 0 is 7 units.
So, total unit of water trapped is 10 units.
*/

#include <bits/stdc++.h>
using namespace std;

int waterTapped(int *height,int n){
  if (n == 0) return -1;
  int left[n];
  int right[n];
  left[0] = height[0];
  for(int i = 1;  i < n ; i++) {
    left[i] = max(left[i-1],height[i]);
  }
  right[n-1] = height[n-1];
  for(int i = n-2; i >= 0 ; i--) {
    right[i] = max(right[i+1],height[i]);
  }
  int trappedWater = 0;
  for(int i = 0 ; i < n; i++) {
    trappedWater += min(left[i],right[i])-height[i];
  }
  return trappedWater;
}

int main() {
  int t;
  cout << "enter " << t <<" test cases : ";
  cin >> t;
  while(t--) {
    int n ;
    // cout << "enter " << n << " elements : ";
    cin >> n;
    int height[n];
    for(int i = 0 ; i < n ; i++) {
      cin >> height[i];
    }
    cout << "Trapped water is : " << waterTapped(height,n) << endl;
  }
  return 0;
}
