#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;	
	if(n!=0 && n!=2)
	{
		if(n%10==0 || n%10==4 || n%10==6 || n%10==8 || n%10==2) cout<<"YES";
		else cout<<"NO";
	}
	else cout<<"NO";
	return 0;
}