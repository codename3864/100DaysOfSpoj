/*

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

*/

// method 1
// vector <int> twoSum(vector <int> &nums,int target) {
//   sort(nums.begin(),nums.end());
//   vector <int> res;
//   int l = 0,r = nums.size()-1;
//   while(l < r) {
//     int sum = nums[l] + nums[r];
//     if(sum == target) {
//       res.push_back(nums[l]);
//       res.push_back(nums[r]);
//       l++,r--;
//     }
//     else if(sum < target) {
//       l++;
//     }
//     else{
//       r--;
//     }
//   }
//   return res;
// }

// using map

#include <bits/stdc++.h>
using namespace std;

void twoSum1(int *arr,int n,int target) {
  map <int,int> mp;
  for(int i = 0 ; i < n; i++) {
    if(mp.find(target-arr[i]) != mp.end()) {
        cout <<  mp[target-arr[i]] <<" " << i << endl;
    }
    else
       mp[arr[i]] = i;
  }
}

int main() {
  int t ;
  cin >> t ;
  while(t--) {
    int n ; // size of vector
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int target ; // target element
    cin >> target;
    twoSum1(arr,n,target);
  }
  return 0;
}
