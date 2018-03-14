#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
	int nr,ile;
	cin>>nr;
	while(nr--)
	{
		cin>>ile;
		int *tab=new int [ile];
		for(int i=0;i<ile;i++)
		{
			cin>>tab[i];
		}
		
		for(int i=1;i<=ile;i++)
		{
			cout<<tab[ile-i]<<" ";
		}
		cout<<endl;
		
		
		delete []tab;
	}
	return 0;
}
