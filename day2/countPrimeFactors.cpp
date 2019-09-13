#include <bits/stdc++.h>
using namespace std;


void pFactors(int num) {
  set <int> s;
  int f1 = 0;
  while(num%2 == 0) {
    f1 = 1;
    num /= 2;
  }
  if(f1 == 1)   s.insert(2);
  f1 = 0;
  for(int i = 3; i*i <= num; i++) {
    while(num%i == 0) {
      s.insert(i);
      num /= i;
    }
  }
  if(num > 2) s.insert(num);
  for(set <int> :: iterator it =s.begin(); it != s.end(); it++) {
    printf("%d ",*it);
  }
  printf("\n");
}

int main() {
    int cnt = 2;
    while(cnt != 100001) {
      printf("%d: ",cnt);
      pFactors(cnt);
      cnt++;
    }
  return 0;
}
