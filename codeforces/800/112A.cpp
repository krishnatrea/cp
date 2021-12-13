#include <iostream>

int main() {
    char s1[101], s2[101];
    std::cin>> s1 >> s2 ;

    for (int i = 0; s1[i] != '\0'; i++)
    {
        s1[i] = std::tolower(s1[i]);
        s2[i] = std::tolower(s2[i]);
    }
    int a = std::strcmp(s1,s2);
    if(a == 0 ){
        std::cout<<0;
    }else if(a > 0){
        std::cout<<1;
    } else {
        std::cout<<-1;
    }
    return 0;
}