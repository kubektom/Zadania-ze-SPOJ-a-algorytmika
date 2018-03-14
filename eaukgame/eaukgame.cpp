#include <iostream>
using namespace std;

int main()
{
	int ile;
	unsigned int tab[2];
	cin>>ile;
	for(int i=0;i<ile;i++)
	{
			cin>>tab[0]>>tab[1];
		
		while(tab[0]!=tab[1])
		{
			if (tab[0]<tab[1])
			{
				tab[1]-=tab[0];
			}
			if (tab[0]>tab[1])
			{
				tab[0]-=tab[1];
			}
		}
		cout<<tab[0]+tab[1]<<endl;
		
	
}
	return 0;
}
