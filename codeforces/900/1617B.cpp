// brute force approach TLE may come 

#include<iostream>
#include<vector>
#define len(s) (int)s.size()
using namespace std;
#define ll long long
ll gcd(ll a, ll b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}
 
void solve(){ // 10^18 => 
  ll n ; 
  cin>>n;
  ll n1,n2,n3;
  for(ll i = n ;i > 1 ; i--) {
      for(ll j = n ; j >  1; j--) {
              ll c = gcd(i,j);
         if(i != j && i != c && j != c) {
              if(n == (i + j + c)) {
                    n1 = i;
                    n2 = j;
                    n3 = c;
                     cout<< n1<<" "<<n2<<" "<<n3<<endl;
                    return;
              }
          }
      }
  }
}
int main(){
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t){
        solve();
        t--;
    }
    return 0;
}


// gcd(a,b) = x*k , y*k , k = gcd(a,b)
// k (n is also a multiple of k ) => x,y,1 ; 
// n / k - 1 = x + y 
// (x,y) => coprime