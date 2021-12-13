#include<iostream>
using namespace std;
int main()
{
		int n;
		cin>>n;
		while(n--)
		{
				char a[100];
				cin>>a;
				int l= strlen(a);
				if(l<=10) cout<<a<<endl;
				else cout<<a[0]<<l-2<<a[l-1]<<endl;
		}
		return 0;
}