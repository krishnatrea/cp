#include<iostream>

int main(){
    int t, n = 0; 
    std::cin>>t;
    while (t--)
    {
        char op[4]; 
        std::cin>>op;
        if(op[1] == '+') {
            n = n + 1;
        }else if(op[1] == '-'){
            n = n - 1;
        }
    }
    std::cout<<n;
    return 0;
}