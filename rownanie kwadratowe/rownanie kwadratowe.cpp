#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	double a,b,c,d;
	while(cin>>a>>b>>c){
		d=(b*b)-(4*a*c);
		if (d<0) cout<<"0"<<endl;
		else if (d==0) cout<<"1"<<endl;
		else cout<<"2"<<endl;
		cin.clear();
		cin.sync();
	}
	return 0;
}

