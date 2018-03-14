#include <iostream> 
#include <cstring>  
using namespace std;  
#define T_SIZE 1001  
char* string_merge(char *a, char *b){
	char *nowy= new char [T_SIZE];
	int i=0;
	int l=0;
	while(a[i]!='\0' && b[i]!='\0')
	{
		nowy[l]=a[i];
		l++;
		nowy[l]=b[i];
		l++;
		i++;
	}
	nowy[l]='\0';
	return nowy;
	
}
int main()
{   
int t;    
char S1[T_SIZE], S2[T_SIZE];    
cin >> t ; /* wczytaj liczbê testów */     
while(t){      
//cin.getline(S1,T_SIZE,' ');     
//cin.getline(S2,T_SIZE); 
cin>>S1>>S2;
char *S=new char[T_SIZE];
S=string_merge(S1,S2);     
cout << S << endl;     
delete [] S;   
t--;  
cin.clear();
cin.sync();   
}    
return 0; 
}

