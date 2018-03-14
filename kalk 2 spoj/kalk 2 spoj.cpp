#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(){
	char znak;
	long tab[10];
	long a,b;
	while(cin>>znak>>a>>b)
	{
	if (znak=='+')
	cout<<tab[a]+tab[b]<<endl;
	if (znak=='-')
	cout<<tab[a]-tab[b]<<endl;
	if (znak=='*')
	cout<<tab[a]*tab[b]<<endl;
	if (znak=='/')
	cout<<tab[a]/tab[b]<<endl;
	if (znak=='%')
	cout<<tab[a]%tab[b]<<endl;
	if (znak=='z')
	tab[a]=b;
	cin.clear();
	cin.sync();
	}
	return 0;
}

