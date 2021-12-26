// number of squres will be sqrt(n).
// number of cubes will be (n)^1/3 
// number of squres + cube = (n)^1/6.
// sqrt(n)+ (n^1/3)- n^1/6.

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sq = floor((double)(sqrt(n)));
        int cube = floor((double)(cbrt(n)));
        int sixroot = sqrt(cbrt(n));
        // cout<<sq << "+" <<cube << "-" << sixroot << endl;
        int ans = sq + cube - sixroot;
        cout<<ans<<endl;
    }
}