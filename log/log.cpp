#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void jedenastka(int a)
{
	if (a == 0) {cout << 0; return;}
	int b = (int) (log10(a) / log10(11)) + 1;
	char *tab=new char[b];
	for(int i=1;i<=b;i++)
	{
		switch(a%11)
		{
			case 10:
				tab[b-i]='A';
				break;
			default:
            tab[b-i] = (a % 11)+48;
            break;
		}
		a/=11;
	}
	for(int j=0;j<b;j++)
	{
		cout<<tab[j];
	}
	delete []tab;
}

void hex(int a)
{
	if (a == 0) {cout << 0; return;}
	int b = (int) (log10(a) / log10(16)) + 1;
	char *tab=new char[b];
	for(int i=1;i<=b;i++)
	{
		switch(a%16)
		{
			case 15:
				tab[b-i]='F';
				break;
			case 14:
				tab[b-i]='E';
				break;
			case 13:
				tab[b-i]='D';
				break;
			case 12:
				tab[b-i]='C';
				break;
			case 11:
				tab[b-i]='B';
				break;
			case 10:
				tab[b-i]='A';
				break;
			default:
            tab[b-i] = (a % 16)+48;
            break;
		}
		a/=16;
	}
	for(int j=0;j<b;j++)
	{
		cout<<tab[j];
	}
	delete []tab;
}
int main(){
	int nr,a;
	cin>>nr;
	for (int i=0;i<nr;i++)
	{
		cin>>a;
		hex(a);
		cout<<" ";
		jedenastka(a);
		cout<<endl;
		cin.clear();
		cin.sync();
	}
}

