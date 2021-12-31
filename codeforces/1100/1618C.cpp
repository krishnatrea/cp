#include<iostream>
#include<vector>
#define len(s) (int)s.size()
using namespace std;
#define ll long long

ll checkdevisor(ll a, ll b) {
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
void solve(){
  ll n;
  cin>>n;
  ll arr[n];
  for(ll i =0 ;i < n ; i++){ 
      cin>>arr[i];
  }
  ll d1 = arr[0];// 10
  ll d2 = arr[1];// 5
  int m = n ; 
  if(!(n%2)) {
      m = n- 1;
  }
  for(int i = 0; i < m ; i = i+2) { // i = 2
      d1 = checkdevisor(d1,arr[i] );// d1= 10; 
      if(i+ 1 < n ){
      d2 = checkdevisor(d2, arr[i+1]); // d2 = 5; 
      }
  }
 int countd1 = 0; 
 int countd2 = 0;

  for(int i = 0 ; i < n ; i++) {
      if(arr[i] % d1 == 0){
          countd1++;
      }
      if(arr[i]%d2 == 0){
          countd2++;
      }
  }

  if((d1 != d2) && (d1 > 1) && (countd1 == (int) (n+1)/2) ) {
      cout<<d1<<endl;
  }else if((d1 != d2) && (d2 > 1) && (countd2 == (int) n/2) ) {
      cout<<d2<<endl;
  } else {
      cout<<0<<endl;
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