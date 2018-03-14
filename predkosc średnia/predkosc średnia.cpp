#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a,b,nr,v;
	cin>>nr;
	while(nr--){
		cin.clear();
		cin.sync();
		cin>>a>>b;
		v=(2*a*b)/(a+b);
		cout<<v<<endl;
		
	}
	return 0;
}

