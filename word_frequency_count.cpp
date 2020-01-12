/*
Design a method to find the frequency of occurrences of any given word in a
book. What if we were running this algorithm multiple times?
*/

#include <bits/stdc++.h>
using namespace std;

int countWords(int n,string str[],string word) {
  map <string,int> mp;
  int cnt = 0 ;
  for(int i = 0 ; i < n; i++) {
    mp[str[i]]++;
  }
  map <string,int> :: iterator it;
  for(it = mp.begin(); it != mp.end(); it++) {
    if(it->first == word) {
      return it->second;
    }
  }
 return 0;
}
int main() {
  int t;
  cout << "Enter number of test case : ";
  cin >> t;
  while(t--){
    int n ;
    cout << "Enter size of string array : ";
    cin >> n;
    string str[n];
    for(int i = 0 ; i < n ; i++) {
      cin >> str[i];
    }
    string word;
    cout << "Enter word to be searched : ";
    cin >> word;
    for(int i = 0 ; i < n ; i++) {
      cout << str[i] << " ";
    }
    cout << countWords(n,str,word) << endl;
  }
  return 0;
}
