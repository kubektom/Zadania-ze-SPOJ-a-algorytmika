#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int nr;
	cin>>nr;
	unsigned int ilu,liczba;
	int *tempo;
	double *ile_ciasteknah;
	for(int i=0;i<nr;i++)
	{
		cin>>ilu>>liczba;
		tempo=new int [ilu];
		for(int j=0;j<ilu;j++)
		{
			cin>>tempo[j];
		}
		
		ile_ciasteknah=new double[ilu];
		for(int j=0;j<ilu;j++)
		{
			ile_ciasteknah[j]=86400/tempo[j];
		}
	double suma=0;
	for(int j=0;j<ilu;j++)
	{
		suma+=ile_ciasteknah[j];
	}
	int wynik;
	if(liczba!=0)
	{
			wynik=ceil(suma/liczba);
	cout<<wynik<<endl;
	}

		
	}
delete [] tempo;
delete [] ile_ciasteknah;
return 0;
}
