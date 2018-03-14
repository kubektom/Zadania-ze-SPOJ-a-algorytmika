#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	int ilosc,kierunek,nr,osx,osy,nr2;
	cin>>nr;
	for (int i=0;i<nr;i++)
	{
		osx=0;
		osy=0;
		cin>>nr2;
		for (int j=0;j<nr2;j++)
		{
			cin>>kierunek>>ilosc;
			if (kierunek==0)
			{
				osy=osy+ilosc;
			}		
			if (kierunek==1)
			{
				osy=osy-ilosc;
			}	
			if (kierunek==2)
			{
				osx=osx+ilosc;
			}
			if (kierunek==3)
			{
				osx=osx-ilosc;
			}
			cin.clear();
			cin.sync();
		}
		if(osy>0)
		{
			cout<<"0 "<<osy<<endl;
		}
		if(osy<0)
		{
			cout<<"1 "<<osy*(-1)<<endl;
		}
		if(osx>0)
		{
			cout<<"2 "<<osx<<endl;
		}
		if(osx<0)
		{
			cout<<"3 "<<osx*(-1)<<endl;
		}
		if(osy==0 && osx==0)
		{
			cout<<"studnia"<<endl;
		}
	}
	
	
	return 0;
}


