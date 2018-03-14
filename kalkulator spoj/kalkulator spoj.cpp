#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	char znak;
	long a,b;
	while(cin>>znak>>a>>b)
	{
	
	if (znak=='+')
	cout<<a+b<<endl;
	if (znak=='-')
	cout<<a-b<<endl;
	if (znak=='*')
	cout<<a*b<<endl;
	if (znak=='/')
	cout<<a/b<<endl;
	if (znak=='%')
	cout<<a%b<<endl;
	cin.clear();
	cin.sync();
	}
	return 0;
}

