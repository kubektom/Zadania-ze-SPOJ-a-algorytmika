#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a;
	int nr;
	int l;
	cin>>nr;
	while(nr--){
		int *tab=new int[6];
		for(int i=0;i<6;i++){
			cin>>a;
			tab[i]=a;
		}
		// [0 , 1 , "1"]
		// [2 , 3 , 1]
		// [4 , 5 , 1]
		l=tab[0]*tab[3]+tab[2]*tab[5]+tab[4]*tab[1]-tab[2]*tab[1]-tab[0]*tab[5]-tab[4]*tab[3];
		if (l==0)
		cout<<"TAK"<<endl;
		else
		cout<<"NIE"<<endl;;
		delete []tab;
	}
	
	return 0;
}

