#include <bits/stdc++.h>
using namespace std;

const int MX = 500;


int preCal(int x,int res[],int res_size) {
  int carry = 0;
  for(int i = 0 ; i < res_size; i++) {
    int prod = res[i]*x + carry;
    res[i] = prod%10;
    carry = prod/10;
  }
  while(carry) {
    res[res_size++] = carry%10;
    carry /= 10;
  }
  return res_size;
}
void fact(int num) {
  int res[MX];
  res[0] = 1;
  int res_size = 1;
  for(int i = 2; i <= num; i++) {
    res_size = preCal(i,res,res_size);
  }
  for(int i = res_size-1; i >= 0; i--) {
    cout << res[i];
  }cout<<endl;
}

int main() {
  int t;
  cin >> t ;
  while(t--){
    int num;
    cin >> num;
    fact(num);
  }
  return 0;
}
