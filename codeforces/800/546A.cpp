#include<iostream>

int main() {
    int k, w , n;
    std::cin>>k>>n>>w;
    int t_am = (w*(w+1)/2)*k - n; 
    if(t_am < 0 ){
        std::cout<<0;
    } else {
        std::cout<<t_am;
    }
}