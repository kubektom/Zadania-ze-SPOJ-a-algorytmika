#include <iostream>
#include <cstdio>
using namespace std;

int main(){
long int nr,a,b;
cin>>nr;
	while(nr--){
		cin>>a>>b;
		
		if(a==1){
		cout<<"TAK"<<endl;
		continue;
	}

		
		if(b%(a-1)!=0){
			cout<<"TAK"<<endl;
		}
		if(b%(a-1)==0){
		
		cout<<"NIE"<<endl;
	}
	}

	return 0;
}

