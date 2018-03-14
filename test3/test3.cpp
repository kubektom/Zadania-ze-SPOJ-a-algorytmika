#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a,s=0,l=0;
	cin>>a;
	if(a==42) s=1;
	while(l!=3){
		cin>>a;
		if(a==42 && s==0){
			s=1;
			l++;
		}
		if (a!=42) s=0;
	}

	return 0;
}

