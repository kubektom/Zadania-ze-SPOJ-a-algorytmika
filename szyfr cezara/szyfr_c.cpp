#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;


int main(){
string a="ABCDEFGHIJKLMNOPQRSTUWXYZ"; //alfabet
string n; //napis który chcemy zakodowaæ
cout<<"wprowadŸ napis"<<endl;
cin>>n; //wprowadzamy napis
cout<<"wprowadŸ klucz"<<endl;
int klucz; // to jest liczba
cin>>klucz;
//klucz=klucz%a.size(); //zawijamy klucz do d³ugoœci alfabetu np. klucz 115 zawijamy do wartoœci od 0 do 25 czyli d³ugoœci alfabetu
for (int i=0;i<n.size();i++){
    for(int j=0;j<a.size();j++)//szukamy znaku z napisu w alfabecie
    {
        if (n[i]==a[j]){ //jeœli znajdzie to:
            n[i]=a[(j+klucz)%a.size()];//zamieni znak napisu w przesuniêty znak alfabetu, a to %a.size() to zawiniêcie jakby wyszed³ poza romiar alfabetu
            break;//WA¯NA LINIJKA przerywa szukanie tego znaku w alfabecie jêsli ju¿ go znalaz³o i zmieni³o i przechodzi do nastêpnego.
        }
    }
}
cout<<n<<endl;





return 0;
}
