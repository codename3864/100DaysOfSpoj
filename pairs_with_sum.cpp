/*
Pairs with Sum: Design an algorithm to find all pairs of integers within an array which sum to a
specified value.
Input  :  arr[] = {1, 5, 7, -1, 5},
          sum = 6
Output : (1, 5) (7, -1) (1, 5)

Input  :  arr[] = {2, 5, 17, -1},
          sum = 7
Output :  (2, 5)

*/

#include <bits/stdc++.h>
using namespace std;

int compare(const void *a,const void *b) {
  return ( *(int*)a - *(int*)b );
}

// prints all the pairs which sum to a given sum
// time complexity = O(nlong),space complexity = O(1)

void pairsWithGivenSum(int *arr,int n,int sum){
  if (n == 0) return ;
  qsort(arr,n,sizeof(int),compare);
  int l = 0,r = n-1;
  while(l < r) {
    int s = arr[l]+arr[r];
    if(s == sum){
      cout << arr[l] << " " << arr[r] << endl;
      l++,r--;
    }
    else if (s < sum){
      l++;
    }
    else {
      r--;
    }
  }
}

/*
use hash map
time complexity : O(n+c) where n is size of array and c is the pair counts with sum
space complexity : O(n);
*/
void allPairsWithSum(int *arr,int n,int sum) {
  if(n == 0) return ;
  map <int,int> mp;
  int total_cnt = 0;

  for(int i = 0 ; i < n; i++) {
    int pair = sum-arr[i];
    if(mp.find(pair) != mp.end()) {
      int cnt = mp[pair];
      cout << "cnt : " << cnt << endl;
      for(int j = 0 ; j < cnt ; j++) {
        // cout << pair <<" " << arr[i] << endl;
        total_cnt += 1;
      }
    }
    mp[arr[i]]++;
  }
  cout << "total pair counts : " << total_cnt << endl;
}

int main(){
  int t;
  cin >> t ;
  while(t--){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
      cin >> arr[i];
    }
    int sum; cout << "enter sum : ";
    cin >> sum;
    // pairsWithGivenSum(arr,n,sum);
    allPairsWithSum(arr,n,sum);
  }
  return 0;
}
