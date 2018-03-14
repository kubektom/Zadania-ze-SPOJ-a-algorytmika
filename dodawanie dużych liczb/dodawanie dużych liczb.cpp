#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	string l1;
	string l2;
	int f;
	int p;
	int nr;
	int z;
	cin>>nr;
	while(nr--){
		f=0;
		cin>>l1>>l2;
		if (l1.size()<l2.size())
		{
			
			string pom;
			pom=l1;
			l1=l2;
			l2=pom;
			
		}
		z=l1.size()-l2.size();
			for(int i=0;i<z;i++)
			{
				l2.insert(0,"0");
			}
		
		
		for (int i=l1.size()-1;i>=0;i--){
			if(f==1){
				 p=1;
				 f=0;
			}
			else p=0;
			p+=(int)(l1[i]+(l2[i]-48));
			if(p>=58){
				f=1;
				p-=10;
			}
				l1[i]=(char)p;
		}
		if(f==1){
			cout<<1;
		}
	
			
			
			
		cout<<l1<<endl;
		
		
		
		
		
	}

	return 0;
}

