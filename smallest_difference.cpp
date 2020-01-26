/*
Smallest Difference: Given two arrays of integers, compute the pair of values (one value in each
array) with the smallest (non-negative) difference. Return the difference.
EXAMPLE
Input: {1, 3, 15, 11, 2}, {23, 127,235, 19, 8}
Output: 3. That is, the pair (11, 8).

*/

#include <bits/stdc++.h>
using namespace std;

int smallestDifference(int *arr1,int arr1Size,int *arr2,int arr2Size) {
  if(arr1Size == 0 || arr2Size == 0) return -1;
  sort(arr1,arr1+arr1Size);
  sort(arr2,arr2+arr2Size);
  int l = 0,r = 0 ;
  int mn = INT_MAX;
  while(l < arr1Size && r < arr2Size){
    if(abs(arr1[l]-arr2[r]) < mn){
      mn = abs(arr1[l]-arr2[r]);
    }
    if(arr1[l] < arr2[r])
         l++;
    else
         r++;
  }
  return mn;
}

int main(){
  int t ;
  cin >> t;
  while(t--){
    int n1,n2;
    cout << "enter size of arr1 and arr2 respectively : ";
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];
    for(int i = 0 ; i < n1; i++) {
      cin >> arr1[i];
    }
    for(int i = 0; i < n2; i++) {
      cin >> arr2[i];
    }
    cout << "Smallest difference between two numbers is : ";
    cout << smallestDifference(arr1,n1,arr2,n2) << endl;
  }
  return 0;
}
