#include <iostream>
#include <string>
using namespace std;


int a;
main(){
cin >> a;
cin.ignore();
    for(int i=0;i<a;i++){
    string zdanie, polowa_zdania; //zmienne
    int liczba_znakow, polowa_znakow; //zmienne

        cin>>zdanie;
        liczba_znakow=zdanie.size();
        polowa_znakow=liczba_znakow/2;
        polowa_zdania=zdanie.substr(0, polowa_znakow);
        cout << polowa_zdania << endl;
        }
        return 0;
}
