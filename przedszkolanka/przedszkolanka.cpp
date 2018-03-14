#include <iostream>
using namespace std;

int nwd(int a, int b)
{
	int pom;
	while(b!=0)
	{
		pom=b;
		b=a%b;
		a=pom;
	}
	return a;
}

int main ()
{
	int nr,a,b;
	cin>>nr;
	for(int i=0;i<nr;i++)
	{
		cin>>a>>b;
		cout<<a/(nwd(a,b))*b<<endl;
	}
}
