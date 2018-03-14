#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;


void rozdziel(long long nr,int tab[]){
	int liczba=floor(log10(nr))+1;
	int pot=10;
	for (int i=0;i<liczba;i++){
		tab[liczba-i-1]=nr%pot;
		nr-=nr%pot;
		nr=nr/10;
	}
}

int dodaj (int tab[],int nr)
{
	int suma=0;
	for(int i=0;i<nr;i++)
	{
		suma+=tab[i];
	}
	return suma;
}

void pomnoz(int tab[],int nr)
{
	tab[1]*=3;
	tab[2]*=7;
	tab[3]*=9;
	tab[5]*=3;
	tab[6]*=7;
	tab[7]*=9;
	tab[9]*=3;
}
int main(){
	int nr;
	
	long long pesel;
	cin>>nr;
	while(nr--){
		int *tab= new int[11];
		cin>>pesel;
		rozdziel(pesel,tab);
		pomnoz(tab,11);
		if(dodaj(tab,11)%10==0)
		cout<<"D"<<endl;
		else
		cout<<"N"<<endl;
		delete []tab;
	}
	

	return 0;
}

