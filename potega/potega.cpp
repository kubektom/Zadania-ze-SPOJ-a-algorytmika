#include <iostream>
using namespace std;

int main()
{
unsigned long int o,p,l;
int ile;
cin>>ile;
for(int i=0;i<ile;i++)
{

	cin>>o>>p;
	if (p==0)
	{
	
	cout<<"1"<<endl;
	continue;
	}
	if(o%10==1)
	{
		cout<<"1"<<endl;
	}
	if(o%10==2)
	{
		l=p%4;
		switch(l)
		{
			case 1:
				cout<<"2"<<endl;
			break;
			case 2:
				cout<<"4"<<endl;
			break;
			case 3:
				cout<<"8"<<endl;
			break;
			case 0:
				cout<<"6"<<endl;
			break;
		}
	}
	if(o%10==3)
	{
		l=p%4;
		switch(l)
		{
			case 1:
				cout<<"3"<<endl;
			break;
			case 2:
				cout<<"9"<<endl;
			break;
			case 3:
				cout<<"7"<<endl;
			break;
			case 0:
				cout<<"1"<<endl;
			break;
		}
	}
	if(o%10==4)
	{
		l=p%4;
		switch(l)
		{
			case 1:
				cout<<"4"<<endl;
			break;
			case 2:
				cout<<"6"<<endl;
			break;
			case 3:
				cout<<"4"<<endl;
			break;
			case 0:
				cout<<"6"<<endl;
			break;
		}
	}
	if(o%10==5)
	{
		cout<<"5"<<endl;
	}
	if(o%10==6)
	{
		cout<<"6"<<endl;
	}
	if(o%10==7)
	{
		l=p%4;
		switch(l)
		{
			case 1:
				cout<<"7"<<endl;
			break;
			case 2:
				cout<<"9"<<endl;
			break;
			case 3:
				cout<<"3"<<endl;
			break;
			case 0:
				cout<<"1"<<endl;
			break;
		}
	}
	if(o%10==8)
	{
		l=p%4;
		switch(l)
		{
			case 1:
				cout<<"8"<<endl;
			break;
			case 2:
				cout<<"4"<<endl;
			break;
			case 3:
				cout<<"2"<<endl;
			break;
			case 0:
				cout<<"6"<<endl;
			break;
		}
	}
	if(o%10==9)
	{
		l=p%4;
		switch(l)
		{
			case 1:
				cout<<"9"<<endl;
			break;
			case 2:
				cout<<"1"<<endl;
			break;
			case 3:
				cout<<"9"<<endl;
			break;
			case 0:
				cout<<"1"<<endl;
			break;
		}
	}
	if(o%10==0)
	{
		cout<<"0"<<endl;
	}
}
	return 0;
}
