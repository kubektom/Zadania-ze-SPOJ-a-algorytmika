#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int nwd(int a,int b)
{
	int max; //chodzi o minimaln� ale nie chcia�o mi sie zmienia� zmiennych wsz�dzie
	if(a>b)	max=b;
	else if (b>a) max=a;
	else max=a;
	
	for(int i=max;i>0;i--)
	{
		if (a%i==0 && b%i==0)	return i;
	}
}

int main()
{
	int nr,a,b;
	cin>>nr;
	while(nr--)
	{
		cin>>a>>b;
		cout<<nwd(a,b)<<endl;
	}
	return 0;
}
