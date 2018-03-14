#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int reverse(int a)
{
	int ile = log(a)/log(10)+1;//sprawdza z ilu cyfr jest liczba
	int *tab=new int[ile];
	int  b=0;
	for(int i=0;i<ile;i++)
	{
		tab[i]=a%10;
		a=a-(a%10);
		a/=10;
	}
	for (int i=0;i<ile;i++)
	{
		b=b+ (tab[i]*(pow(10,ile-i-1 )));
	}
	return b;
	delete []tab;
}

int main()
{
	int nr,liczba;
	int cykle;
	cin>>nr;
	while(nr--)
	{
		cin>>liczba;
		cykle=0;
		while(1)
		{
		
		if(liczba==reverse(liczba))
		{
			cout<<liczba<<" "<<cykle<<endl;
			break;
		}
		else
		{
			liczba=liczba+reverse(liczba);
			cykle++;
		}
		}
		
	}
	
}
