#include <iostream>
using namespace std;

int main()
{
		int tab[10000];
		int a;
		int c=0;
		while(cin>>a)
		{
			tab[c]=a;
			c++;
		}
		c--;
		for(c;c>=0;c--)
		{
			cout<<tab[c]<<" ";
		}
		cout<<endl;
		
		
	return 0;
}
