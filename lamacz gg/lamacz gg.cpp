#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	string haslo;
	int suma;
	while(cin>>haslo){
		
		for(int i=0;i<haslo.size();i+=2){
			suma=0;
			suma+=(int)haslo[i]-65;
			suma+=((int)haslo[i+1]-65)*16;
			cout<<(char)suma;
		}
		cout<<endl;
	}

	return 0;
}

