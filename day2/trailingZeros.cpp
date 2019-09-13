#include <bits/stdc++.h>
using namespace std;

int trailingZeros(int num) {
  int res = 0;
  for(int i = 5; num/i >= 1; i *= 5) {
    res += num/i;
  }
  return res;
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int num;
    cin >> num;
    cout << trailingZeros(num) << endl;
  }
  return 0;
}
