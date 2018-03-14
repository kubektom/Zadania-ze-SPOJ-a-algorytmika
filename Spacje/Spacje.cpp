#include <iostream>
#include <string>
using namespace std;
int main()
{
	string n;
	int dl;
	while(getline(cin,n))
	{
	
	dl=n.size();
	for(int i=0; i<dl;i++)
	{	
		while (n[i]==' ')
		{
		
			while(n[i]==' ')
			{
				n.erase(i,1);
			}
			
			if(n[i]>=97 && n[i]<=122)
			{
			n[i]-=32;
			}
			i--;
		}
	}
	cout<<n<<endl;
}
	
	return 0;
}
