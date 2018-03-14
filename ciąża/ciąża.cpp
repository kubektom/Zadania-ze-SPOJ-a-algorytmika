#include <cstdio>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double a,b,c;
	double n;
	int nr;
	cin>>nr;
	for(int i=0;i<nr;i++)
	{
	cin>>a>>b>>c;
	n=((a+b)-(b*c))/(c-1);
	n=n*(-12);
	cout<<round(n)<<endl;
	}
	return 0;
}




