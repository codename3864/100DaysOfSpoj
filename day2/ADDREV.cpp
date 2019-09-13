#include <bits/stdc++.h>
using namespace std;

int reverseInt(int num) {
  int res = 0;
  while(num) {
    res = res*10 + num%10;
    num /= 10;
  }
  return res;
}

int main() {
  int t ;
  cin >> t;
  while(t--) {
    int num1,num2;
    cin >> num1 >> num2 ;
    int rev1 = reverseInt(num1);
    int rev2 = reverseInt(num2);
    int sum = rev1 + rev2;
    cout << reverseInt(sum) << endl;
  }
  return 0;
}
