#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed );
	cout.precision(2);
	double a,b,c,x;
	cin>>a>>b>>c;
	if (a==0 && b==c){
		cout<<"NWR"<<endl;
		return 0;
	}
	if (a==0 && b!=c){
		cout<<"BR"<<endl;
		return 0;
	}
	x=(c-b)/a;
	cout<<x<<endl;

	return 0;
}

