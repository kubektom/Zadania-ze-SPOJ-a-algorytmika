#include <iostream>
using namespace std;
int main ()
{
	int nr,ile,suma;
	cin>>nr;
	int *tab;
	for(int i=0;i<nr;i++)
	{
		cin>>ile;
		suma=0;
		tab=new int[ile];
		for (int j=0;j<ile;j++)
		{
			cin>>tab[j];
			suma+=tab[j];
		}
		cout<<suma<<endl;
		
	}
	
	
	
	delete [] tab;
	return 0;
}
