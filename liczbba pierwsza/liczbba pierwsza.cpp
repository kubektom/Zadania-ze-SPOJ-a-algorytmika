#include <iostream>
using namespace std;

int main()
{
unsigned long int ile,n;
	long int tab[2];

	cin>>ile;
	for(int i=0;i<ile;i++)
    {
        cin >> n;
        if(n==0 || n==1)
            cout << "0 " << "1" << endl;
        else if(n==2)
            cout << "0 " << "2" << endl;
        else if(n==3)
            cout << "0 " << "6" << endl;
        else if(n==4)
            cout << "2 " << "4" << endl;
        else if(n==5 || n==6 || n ==8)
            cout << "2 " << "0" << endl;
        else if(n==7)
            cout << "4 " << "0" << endl;
        else if(n==9)
            cout << "8 " << "0" << endl;
        else
            cout << "0 " << "0" << endl;
    }
	return 0;
}
