/*Given two unsorted arrays A of size N and B of size M of distinct elements,
the task is to find all pairs from both arrays whose sum is equal to X.

Input:
The first line of input contains an integer T denoting the no of test cases.
Then T test cases follow. Each test case contains 3 lines . The first line
contains 3 space separated integers N, M, X. Then in the next two lines are space
separated values of the array A and B respectively.

Output:

For each test case in a new line print the sorted space separated values of all the
pairs u,v where u belongs to array A and v belongs to array B, such that each pair is
separated from the other by a ',' without quotes also add a space after the ',' .
If no such pair exist print -1.

Constraints:
1 <= T <= 100
1 <= N, M, X <= 106
-106 <= A, B <= 106

Example:
Input:
2
5 5 9
1 2 4 5 7
5 6 3 4 8
2 2 3
0 2
1 3
Output:
1 8, 4 5, 5 4
0 3, 2 1

Explanation:
Testcase 1: (1, 8), (4, 5), (5, 4) are the pairs which sum to 9.
*/

#include <bits/stdc++.h>
using namespace std;

void findAllPairs(int *arr1,int n,int *arr2,int m,int sum) {
  map <int,int> mp;
  for(int i = 0 ; i < n ; i++) {
    mp[arr1[i]] = i;
  }
  int cnt = 0 ;
  for(int i = 0 ; i < m ; i++) {
    if(mp.find(sum-arr2[i]) != mp.end()) {
      cout << sum-arr2[i] <<" " << arr2[i] <<" \n" ;
      cnt++;
    }
  }
  if(cnt == 0) cout << "not pair exists : \n";
}

int main() {
  int t ;
  cin >> t ;
  while(t--) {
    int n,m,sum;
    cin >> n >> m >> sum;
    int arr1[n];
    int arr2[m];
    for(int i = 0 ; i < n ; i++) {
      cin >> arr1[i];
    }
    for(int i = 0 ; i < m ; i++) {
      cin >> arr2[i];
    }
    findAllPairs(arr1,n,arr2,m,sum);
  }
  return 0;
}
