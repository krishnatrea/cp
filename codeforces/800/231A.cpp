#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a,b,c;
	int d=0;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		if(a==1 && (b==1 || c==1)) d++;
		else if(b==1 && (a==1 || c==1)) d++;
		else if(c==1 && (b==1 || a==1)) d++;
		}
		cout<<d;
}