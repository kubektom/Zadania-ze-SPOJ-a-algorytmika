#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;


int main(){
string a="ABCDEFGHIJKLMNOPQRSTUWXYZ"; //alfabet
string n; //napis kt�ry chcemy zakodowa�
cout<<"wprowad� napis"<<endl;
cin>>n; //wprowadzamy napis
cout<<"wprowad� klucz"<<endl;
int klucz; // to jest liczba
cin>>klucz;
//klucz=klucz%a.size(); //zawijamy klucz do d�ugo�ci alfabetu np. klucz 115 zawijamy do warto�ci od 0 do 25 czyli d�ugo�ci alfabetu
for (int i=0;i<n.size();i++){
    for(int j=0;j<a.size();j++)//szukamy znaku z napisu w alfabecie
    {
        if (n[i]==a[j]){ //je�li znajdzie to:
            n[i]=a[(j+klucz)%a.size()];//zamieni znak napisu w przesuni�ty znak alfabetu, a to %a.size() to zawini�cie jakby wyszed� poza romiar alfabetu
            break;//WA�NA LINIJKA przerywa szukanie tego znaku w alfabecie j�sli ju� go znalaz�o i zmieni�o i przechodzi do nast�pnego.
        }
    }
}
cout<<n<<endl;





return 0;
}
