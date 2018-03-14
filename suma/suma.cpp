#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int ile,nr;
	long int suma=0;
	int *tab;
	cin>>nr;
	for(int i=0;i<nr;i++)
	{
	cin>>ile;
	tab = new int [ile] ;
		for(int j=0;i<ile;j++)
		{
			cin>>tab[j];
			suma=suma+tab[j];
		}
	cout<<"suma"<<endl;
	suma=0;
	delete [] tab;
	}
	
	return 0;
}
