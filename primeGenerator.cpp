#include <bits/stdc++.h>
using namespace std;
const int MX = 1e7+7;
/* generate all prime numbers in a given range
 constraints 1 <= m <= n <= 1000000000, n-m<=100000
  time compexity : O(sqrt(max(n,m))*max(n,m))
*/

bool isPrime(int num) {
  if(num == 0 || num == 1) return false;
  for(int i = 2; i*i <= num; i++){
    if(num%i == 0) return false;
  }
  return true;
}

/* count prime numbers in range n = 10^7
  follow up problem count the prime number in range
*/
vector <int> res;
int sieve(int num) {
  bool prime[num+1];
  for(int i = 0 ; i <= num; i++) {
    prime[i] = true;
  }
  prime[0] = false;
  prime[1] = false;
  for(int i = 2 ; i*i <= num; i++) {
    if(prime[i] == true) {
      for(int j = i*i; j <= num ; j += i) {
        prime[j] = false;
      }
    }
  }
  int cnt = 0 ;
  for(int i = 2 ; i <= num ; i++) {
    if(prime[i] == true){
      cnt++;
    }
    res[i] = cnt;
  }
}



int main() {
  int t;
  cin >> t ;
  while(t--) {
    int n,m;
    cin >> n >> m;
    for(int i = n; i <= m ; i++) {
      if(isPrime(i)) cout << i << endl;
    }cout << endl;
      cout << res[m] - res[n-1] << endl;
  }
  return 0;
}
