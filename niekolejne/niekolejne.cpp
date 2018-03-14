#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	long int a,b=1;
	cin>>a;
	
	if (a==2 || a==1){
		cout<<"NIE"<<endl;
		return 0;
	}
	if (a==0){
		cout<<0;
		return 0;
	}
	cout<<b;
	for(int i=1;i<=a;i+=2)
	{
		if(i-b>=2 || i-b<=-2 )
		cout<<" "<<i;
		b=i;
	}
	for(int i=0;i<=a;i+=2)
	{
		if(i-b>=2 || i-b<=-2 )
		cout<<" "<<i;
		b=i;
	}
	cout<<endl;
	return 0;
}

