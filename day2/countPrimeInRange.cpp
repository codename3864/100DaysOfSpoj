#include <bits/stdc++.h>
using namespace std;

const int MX = 1e5+15;

int  preCal[MX];
bool prime[MX];
void sieve(){
  for(int i = 0 ; i <= MX; i++) {
    prime[i] = true;
  }
  prime[0] = false;
  prime[1] = false;
  for(int i = 2; i*i <= MX; i++) {
    if(prime[i] == true) {
      for(int j = i*i; j <= MX; j += i) {
        prime[j] = false;
      }
    }
  }
  for(int i = 2; i <= MX; i++) {
    preCal[i] = preCal[i-1] + (int)prime[i];
  }
}
int query(int x,int y){
  sieve();
  return preCal[y]-preCal[x-1];
}

int main() {
  int t;
  cin >> t ;
  while(t--) {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d\n",query(x,y));
  }
  return 0;
}
