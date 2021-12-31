#include<iostream>
using namespace std;
int n[4001] = {0};
int getnoofribbon(int x,int a,int b,int c){
    if(x == 0) return 0;
    if(x < 0)   return -1;
    if(n[x] == -1) return -1;
    if(n[x]>0) return n[x];
    int y = max(getnoofribbon(x-a,a,b,c),max(getnoofribbon(x-b,a,b,c),getnoofribbon(x-c,a,b,c)));
    if(y == -1)     n[x]=-1;
    else if(y>=0)   n[x] = y+1;
 
    return n[x];
}
 
int main(){
 
    int x,a,b,c;
    cin>>x>>a>>b>>c;
    cout<<getnoofribbon(x,a,b,c);
}