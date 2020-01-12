#include <bits/stdc++.h>
using namespace std;


/*
swap two numbers without using 3rd variable
eg a = 2,y = 3;
after swapping a = 3,b = 2
*/

void swap1(int x,int y) {
  x = x+y;
  y = x-y;
  x = x-y;
  cout <<"After swapping method1 : "<< x <<" " << y << endl;
}


void swap2(int x,int y) {
  x = x^y;
  y = x^y;
  x = x^y;
  cout << "after swapping method2 : " << x <<" " << y  << endl;
}

void swap3(int *x,int *y) {
  *x = *x^*y;
  *y = *x^*y;
  *x = *x^*y;

}

int main() {
  int x,y;
  cin >> x >> y ;
  swap1(x,y);
  swap2(x,y);
  swap3(&x,&y);
  cout << x <<" " << y << endl;
  return 0;
}
