#include<iostream>
#include<map>
#include<vector>
#define len(s) (int)s.size()
using namespace std;
#define ll long long

#define range 100000
 
ll solve(int t){
    ll m[range] = {0};
    for(int i =0 ;i < t; i ++) {
        ll a;
        cin>>a;
        m[a]++;
    }

    ll maX = m[1];
    ll maX2 = 0;

    ll currMax;
    for(int i = 2 ; i< range; i++) {
        currMax = max(maX,(m[i] * (i)) + maX2);

        maX2 = maX;
        maX = currMax;
    }
    return currMax;
}
 
int main(){
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

        ll sol = solve(t);
        cout<<sol<<endl;
    return 0;
}

// 0 