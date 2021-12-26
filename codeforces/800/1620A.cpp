// ENE -> not possible case
// as a1 == a2 , a2 != a3 but a3 == a1 logic is not possible
// ENEN is possible 
// as a1 == a2, a2 != a3 , a3 == a4 , a4 != a1
// NEEN is possible
// a1 != a2, a2 == a3, a3 == a4, a4 != a1
// NENEN is possible
// a1 != a2, a2 == a3, a3 != a4, a4 == a5, a5 != a1

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int no_of_n = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'N'){
                no_of_n++;
            }
        }
        if(no_of_n == 1){
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
