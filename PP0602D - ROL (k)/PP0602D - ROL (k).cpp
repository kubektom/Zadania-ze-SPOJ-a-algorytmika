#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	cin>>n;
	int *tab=new int [n];
	int *tab2=new int [n];
	int ile;
	cin>>ile;
	for (int i=0;i<n;i++)
	{
		cin>>tab[i];
	}
	for (int i=0;i<ile;i++)
	{
		tab2[i+(n-ile)]=tab[i];
	}
	for (int i=0;i<n-ile;i++)
	{
		tab2[i]=tab[i+ile];
	}
	for (int i=0;i<n;i++)
	{
		cout<<tab2[i]<<" ";
	}
	cout<<endl;
	delete []tab;
	delete []tab2;
	return 0;
}

