
/*
You are given an array of integers (both positive and negative). Find the
contiguous sequence with the largest sum. Return the sum.
EXAMPLE 1
lnput:
arrsize = 6
arr[] = {2, -8, 3, -2, 4, -10}
Output: 5 ( i. e • , { 3, -2, 4})
eg 2 : inputs :size = 2
arr[] = {-1,-10}
output = -1
*/
#include <bits/stdc++.h>
using namespace std;

// returns max sum of largest continuous subarray
/*
Time complexity : O(n), where n is the size of array
Space complexity : O(1)
*/

int largestContinuousSum(int *arr,int n) {
  int sum = 0;
  int res = INT_MIN;
  for(int i = 0 ; i < n; i++) {
    sum += arr[i];
    if(sum > res)
       res = sum;
    if(sum  < 0)
       sum = 0;
  }
  return res;
}

//method 2 using dynamic programming
/*
Time complexity : O(n)
Space complexity :O(1)
*/

int maxSumContinuous(int *arr,int n) {
  int mx = arr[0];
  int res = arr[0];
  for(int i = 1; i < n ; i++) {
    mx = max(arr[i]+mx,arr[i]);
    res = max(res,mx);
  }
  return res;
}

int main() {
  int t;
  cout << "Enter number of test cases :";
  cin >> t ;
  while(t--) {
    int n;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n <<" elements : ";
    for(int i = 0 ; i < n ; i++) {
      cin >> arr[i];
    }
    cout <<"Largest continuous sum is : " <<  largestContinuousSum(arr,n) <<" " << maxSumContinuous(arr,n)<< endl;
  }
  return 0;
}
