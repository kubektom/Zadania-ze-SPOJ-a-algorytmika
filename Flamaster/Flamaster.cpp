#include <iostream>
#include <string>
using namespace std;

int main()
{
	int nr,dl,licz=0;
	cin>>nr;
	string napis;
	string lic;
	for(int i=0;i<nr;i++)
	{
		cin>>napis;
		dl=napis.size();
		licz=0;	
		for (int j=0;j<dl;j++)
		{
			
			if(napis[j]==napis[j+1])
			{
				licz++;
				continue;
			}
			cout<<napis[j];
			if(licz==1)
			{
				cout<<napis[j];
			}
			if(licz>1){
				cout<<licz+1;
			}
			
			licz=0;
		}
		cout<<endl;
	}
	
	
	return 0;
}
