#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int nr,nr2,a,i;
	cin>>nr;
	while(nr--)
	{
		cin>>nr2;
		int i=0;
		int z=nr2;
		int *tab=new int[nr2];
		int *tab2=new int[nr2];
		while(nr2--)
		{
			cin>>a;
			tab[i]=a;
			i++;
		}
		i=0;
		for(int j=0;j<z;j++)
		{
			
			if(j%2==1)
			{
				tab2[i]=tab[j];
				i++;
			}
		}
		for(int j=0;j<z;j++)
		{
			
			if(j%2==0)
			{
				tab2[i]=tab[j];
				i++;
			}
		}
		for(int j=0;j<z;j++)
		{
			
			cout<<tab2[j]<<endl;
		}
	}

	return 0;
}

