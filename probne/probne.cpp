#include <iostream>
using namespace std;

int main()
{
	int ile, ile_l;
	int *liczba;
	cin>>ile;
	for(int i=0;i<ile;i++)
	{
	cin>>ile_l;
	liczba=new int [ile_l];
	for(int i=0;i<ile_l;i++)
	{
		cin>>liczba[i];
	}
	int bufor;
	bufor=liczba[0];
	for(int i=1;i<ile_l;i++)
	{
		liczba[i-1]=liczba[i];
	}
	liczba[ile_l-1]=bufor;
	for(int i=0;i<(ile_l);i++)
	{
		cout<<liczba[i]<<" ";
	}
	cout<<endl;

	}
	delete [] liczba;
	return 0;
}
