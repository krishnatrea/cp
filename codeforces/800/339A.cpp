#include<iostream>
using namespace std;
 
int main()
{
	char a[100];
	int b[3]={0,0,0};
	cin>>a;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='1') b[0]++;
		else if(a[i]=='2') b[1]++;
		else if(a[i]=='3') b[2]++;
	}
	int count=1;
	for(int i=0;i<3;i++){
		for(int j=0;j<b[i];j++){
			
			cout<<i+1;
			if(a[count]!='\0') cout<<'+';
			count+=2;
		}
	}		
	return 0;
}