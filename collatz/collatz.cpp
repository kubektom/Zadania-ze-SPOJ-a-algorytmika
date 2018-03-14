#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	int nr,n,x,s;
	cin>>nr;
	for (int i=0;i<nr;i++)
	{
		cin>>s;
		n=s;
		x=0;
		while(n!=1)
		{
			if(n%2==1)
			{
				n=(3*n)+1;
				x++;
			}
			if(n%2==0)
			{
				n=n/2;
				x++;
			}
		}
		cout<<x<<endl;
		
		
	}
	
	
	
	
	
	return 0;
}
