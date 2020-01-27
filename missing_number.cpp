/*
Given an array C of size N-1 and given that there are numbers from 1 to N with one element missing, the missing number is to be found.

Input:
The first line of input contains an integer T denoting the number of test cases. For each test case first line contains N(size of array). The subsequent line contains N-1 array elements.

Output:
Print the missing number in array.

Constraints:
1 ≤ T ≤ 200
1 ≤ N ≤ 107
1 ≤ C[i] ≤ 107

Example:
Input:
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10

Output:
4
9

Explanation:
Testcase 1: Given array : 1 2 3 5. Missing element is 4.
*/

#include <bits/stdc++.h>
using namespace std;

int missingNum(int *arr,int n) {
    int missN = 0;
    for(int i = 1;  i <=n; i++) {
        missN ^= i;
    }
    for(int i = 0 ; i < n-1 ; i++) {
        missN ^= arr[i];
    }
    return missN;
}

// method 2

int missingNum2(int *arr,int n) {
  int natSum = n*(n+1)/2;
  int arrSum = 0 ;
  for(int i = 0 ; i < n-1 ; i++) {
    arrSum += arr[i];
  }
  return natSum-arrSum;
}

int main()
{
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        int arr[n];
        for(int i = 0 ; i < n-1; i++) {
            cin >> arr[i];
        }
        cout <<"Missing number is : " <<  missingNum(arr,n) <<" " << missingNum2(arr,n)<< endl;
    }
  return 0;
}
