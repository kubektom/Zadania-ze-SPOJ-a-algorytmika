#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
void wypelnij(float *tab, int ile)
{
	for (int i=0;i<ile;i++)
	{
	*tab=rand()%10;
	*tab++;
	}
}
void wypisz(float *tab, int ile)
{
	for (int i=0;i<ile;i++)
	{
	cout<<"nr."<<i+1<<" to: "<<*tab<<endl;
	*tab++;
	}
}
float srednia(float *tab, int ile)
{
	float suma=0;
	for (int i=0;i<ile;i++)
	{
	suma=suma+(*tab);
	*tab++;
	}
	return suma/ile;
}



float najblizej(float *tab, int ile, float liczba)
{
	float naj=1000;
	float roznica=1000;
	float roznica2=1000;
	float licznik=1;	
	naj=*tab;
	for (int i=0;i<ile;i++)
	{
		roznica=*tab-liczba;
		if(roznica<0) 
		{
			roznica=roznica*(-1);
		}
		
		if (roznica<=roznica2) 
		{
			if (roznica==roznica2) 
			{
				licznik++;
			}
			else {
				licznik=1;
			}
			roznica2=roznica;
			naj=*tab;
		}
		
		*tab++;
	}
	cout<<"tych liczb jest: "<<licznik<<endl;
	return naj;
}
int main(){
	srand(time(NULL));
	cout<<"podaj iloœæ liczb: "<<endl;
	int ile;
	cin>>ile;
	float *tablica;
	tablica= new float[ile];
	wypelnij(tablica,ile);
	wypisz(tablica, ile);
	cout<<"srednia liczb to: "<<srednia(tablica,ile)<<endl;
	float sredniaa;
	sredniaa=srednia(tablica,ile);
	cout<<"najblizsza liczba to: "<<najblizej(tablica,ile,sredniaa)<<endl;
	
	
	
	delete [] tablica;
	return 0;
}
