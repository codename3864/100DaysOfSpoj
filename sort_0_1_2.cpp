/*

Given an array A of size N containing 0s, 1s, and 2s; you need to sort the array in ascending order.

Input:
The first line contains an integer 'T' denoting the total number of test cases. Then T testcases
follow. Each testcases contains two lines of input. The first line denotes the size of the array N.
 The second lines contains the elements of the array A separated by spaces.

Output:
For each testcase, print the sorted array.

Constraints:
1 <= T <= 500
1 <= N <= 106
0 <= Ai <= 2

Example:
Input :
2
5
0 2 1 2 0
3
0 1 0

Output:
0 0 1 2 2
0 0 1

Explanation:
Testcase 1: After segragating the 0s, 1s and 2s, we have 0 0 1 2 2 which shown in the output.
*/

#include <bits/stdc++.h>
using namespace std;


void sort012(int *arr,int n) {
  int l = 0,mid = 0 ,r = n-1;
  while(mid <= r) {
    if(arr[mid] == 0) {
      swap(arr[l++],arr[mid++]);
    }
    else if(arr[mid] == 2) {
      swap(arr[r--],arr[mid]);
    }
    else
       mid++;
  }
  for(int i = 0 ; i < n; i++) {
    cout << arr[i] <<" ";
  }
  cout << endl;

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
    }
    sort012(arr,n);

  }
  return 0;
}
