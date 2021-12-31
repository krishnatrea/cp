#include<iostream>
#include<vector>
#include<map>
#define len(s) (int)s.size()
using namespace std;
#define ll long long
 
void solve(){
    // input 
  int w,h;
  cin>>w>>h;
  vector< vector<int> > points;
  for(int i =0 ;i < 4; i++)  {
      int k; 
      cin>>k;
      vector<int> a;
      for(int j =0 ; j< k ; j++ ) {
          int m; 
          cin>>m;
          a.push_back(m);
      }
      points.push_back(a);
  }
    // 0,1 corr -> x
    // 2,3 corr -> y
    // get all 
    vector<ll> area;

    for(int i =0 ; i< len(points) ; i++ ){
        ll first = points[i].front();
        ll last = points[i].back();
        area.push_back(last - first);
    } 
    for(int i = 0 ; i< len(area) ; i++) {
        if(i ==0 || i == 1) {
            area[i] *= h ; 
        }else {
            area[i] *= w;
        }
    }
    cout<< *max_element(area.begin(), area.end()) <<endl;
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