#include<iostream>
#include<vector>
#define len(s) (int)s.size()
using namespace std;
#define ll long long

void solve(){
    ll a, c; 
    cin>>a>>c;
    vector<int> b;

    if(a > c) cout<<-1<<endl;
    else {
        while(c) {
            int x = a %10;
            int y = c %10;
            if(x <= y ) b.push_back(y - x);
            else {
                c = c / 10 ;
                y = y +  10 * (c % 10);
                if(x  < y && y >= 10 && y <= 19) b.push_back( y-x);
                else {
                    cout<<-1<<endl;
                    return;
                }
            }
            a /= 10;
            c /= 10;
        }
        if(a) cout<<-1<<endl;
        else {
            while (b.back() == 0) b.pop_back();
            for(int i = len(b) - 1; i >=0 ; i --) {
                cout<<b[i];
            }
            cout<<endl;
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