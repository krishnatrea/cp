#include <algorithm>
#include<iostream>
int main() {
    int n; 
    std::cin>>n;
    int a[n];
    int total= 0, sum1 = 0;
    for(int i=0;i<n;i++){
        std::cin>>a[i];
        total+=a[i];
    }
    std::sort(a,a+n);
    std::reverse(a,a+n);
    for(int i = 0; i < n;i++) {
        sum1 += a[i];
        if(sum1 > total - sum1) {
            std::cout<<i + 1  <<"\n";
            return 0;
        }
    }
}