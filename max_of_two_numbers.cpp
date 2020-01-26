/*
Number Max: Write a method that finds the maximum of two numbers. You should not use if-else
or any other comparison operator

*/
#include <bits/stdc++.h>
using namespace std;

// this is based on comparison operators but without using if-else so,not valid
int maxNumber(int n1,int n2) {
  return (n1 > n2) ? n1 : n2;
}

// returns max of two numbers .
int maxNumber1(int n1,int n2){
  return n1^((n1^n2) & -(n1 < n2));
}

//returns min of two numbers
int minNumber(int n1,int n2){
  return n2^((n1^n2) & - (n1 < n2));
}

// max of two using arithmetic operator
int maxTwo(int n1,int n2){
  return n1 * (bool)(n1/n2) + n2*(bool)(n2/n1);
}

int main(){
  int x = 5 < 4;
  cout << x;
  int t ;
  cin >> t;
  while(t--){
    cout << "Enter two numbers : ";
    int n1,n2;
    cin >> n1 >> n2;
    cout << "Max of two numbers is : " << maxNumber1(n1,n2) <<" " << maxTwo(n1,n2) << endl;
  }
  return 0;
}
