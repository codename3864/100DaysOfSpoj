/*
Given an array A of N elements. Find the majority element in the array.
A majority element in an array A of size N is an element that appears more than N/2 times in the array.


Input:
The first line of the input contains T denoting the number of testcases. The first line of the test case will be
the size of array and second line will be the elements of the array.

Output:
For each test case the output will be the majority element of the array.
Output "-1" if no majority element is there in the array.

Constraints:
1 <= T<= 100
1 <= N <= 10^7
0 <= Ai <= 10^6

Example:
Input:
2
5
3 1 3 3 2
3
1 2 3

Output:
3
-1

Explanation:
Testcase 1: Since, 3 is present more than N/2 times, so it is the majority element.

*/

#include <bits/stdc++.h>
using namespace std;

int majorityElement(int *arr,int n) {
  int cnt = 1;
  int majIdx = 0; // index of majority element
  for(int i = 1; i < n ; i++) {
    if(arr[i-1] == arr[i])
        cnt++;
    else
        cnt--;
    if(cnt == 0) {
      majIdx = i;
      cnt = 1;
    }
  }
  int cntMaj = 0 ;
  for(int i = 0 ; i < n ; i++) {
    if(arr[i] == arr[majIdx]) {
      cntMaj++;
    }
  }
  return (cntMaj < n/2+1) ?  -1 : arr[majIdx];
}

int main()
{
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        int arr[n];
        for(int i = 0 ; i < n; i++) {
            cin >> arr[i];
        }
        cout <<"Majority element is : " <<  majorityElement(arr,n) << endl;
    }
  return 0;
}
