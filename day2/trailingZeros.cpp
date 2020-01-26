// #include <bits/stdc++.h>
// using namespace std;
//
// long long trailingZeros(long long  num) {
//   long long res = 0;
//   for(int i = 5; num/i >= 1; i *= 5) {
//     res += num/i;
//   }
//   return res;
// }
//
// void numbersWith3Divisors(int n)
// {
//     bool prime[n+1];
//     memset(prime, true, sizeof(prime));
//     prime[0] = prime[1] = 0;
//
//     for (int p=2; p*p<=n; p++)
//     {
//         // If prime[p] is not changed, then it is a prime
//         if (prime[p] == true)
//         {
//            // Update all multiples of p
//            for (int i=p*2; i<=n; i += p)
//               prime[i] = false;
//         }
//     }
//
//     // print squares of primes upto n.
//     cout << "Numbers with 3 divisors :\n";
//     int c = 0 ;
//     for (int i=0;  i*i <= n ; i++){
//         if (prime[i])
//         {
//           c++;
//         }
//           cout << i*i << " ";
//         }
//     cout <<  c << endl;
// }
//
// int main() {
//   numbersWith3Divisors(900);
//   int t;
//   cin >> t;
//   while(t--) {
//     long long  num;
//     cin >> num;
//     cout << trailingZeros(num) << endl;
//   }
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;

bool check_prime(int n)
{
  int c = 0 ;
    for(int i = 2; i*i <= n ; i++)
        if(n%i == 0)
           return false ;
    return true ;
}

int main()
{
  cout << 29*29 << endl;
  for(int i = 1; i <=900; i++) {
    if(check_prime(i)) cout << i <<" ";
  }

    // int t ;
    // cin >> t ;
    // while(t--)
    // {
    //     ll x ;
    //     scanf("%I64d",&x) ;
    //     double tmp = sqrt(x) ;
    //     int cnt = 0;
    //     if(floor(tmp) == tmp && check_prime(tmp) && x > 3)
    //         cnt++;
    //     cout << cnt << endl;
    // }
    return 0;
}
