#include <iostream>

int main () {
    int count = 0;

    char pos[101];

    std::cin>>pos;

    for (int i = 0; pos[i] != '\0';i++)
    {
        count = 0;
        for(int j = 0 ; pos[i] != '\0' && j < 7 && pos[i] == pos[i+j] ; j++) {
            count++;
        }
        if(count >= 7) {
            break;
        }
    }
     if(count < 7) {
        std::cout<<"NO";
    }else {
        std::cout<<"YES";
    }
    return 0;
}