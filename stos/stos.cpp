#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	int tab[10];
	string znak;
	int i=0;
	int w;
	
	while(cin>>znak){
	if(znak=="+" && i<10){
	cin>>w;
	cout<<":)"<<endl;
	tab[i]=w;
	i++;
	
	}
	else if(znak=="-" && i>=1){
		i--;
		cout<<tab[i]<<endl;
	}
	else{
		cout<<":("<<endl;
	}
	cin.clear();
	cin.sync();
	}
	
	

	return 0;
}

