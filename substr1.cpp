#include <bits/stdc++.h>
using namespace std;

/* check whether tar is substring of par or not
eg 1 ; par = "1010110010" tar = "10110" output : 1
       par = "1110111011" tar = "10011" output : 0
 */
bool isSubstr(string par,string tar) {
  int parLen = par.size();
  int tarLen = tar.size();
  for(int i = 0 ; i <= parLen-tarLen; i++) {
    int j;
    for(j = 0; j < tarLen; j++) {
      if(par[i+j] != tar[j]) {
        break;
      }
    }
    if(j == tarLen) return true; // return i ;
  }
  return false;
}

int main() {
  int t;
  cin >> t ;
  while(t--) {
    string src,tar;
    cin >> src >> tar ;
    cout << isSubstr(src,tar) << endl;
  }
  return 0;
}
