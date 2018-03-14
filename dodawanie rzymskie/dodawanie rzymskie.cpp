#include <iostream>
#include <cstdio>
#include <cstring>
#include <ctime>
using namespace std;
//funkcja która zamienia znaki rzymskie na arabskie- bd wiedzia³ o co chodzi
int convert(char x){
	if (x == 'I') return 1;
   	else if (x == 'V') return 5;
   	else if (x == 'X') return 10;
   	else if (x == 'L') return 50;
   	else if (x == 'C') return 100;
  	else if (x == 'D') return 500;
  	else if (x == 'M') return 1000;
  	else return 0;
}
//funkcja zamienia rzymsk¹ liczbe na arabsk¹
int czyt(string nap)
{
	int l=0;//zmienna przechowuje liczbe arabsk¹
	int c1,c2;//zmienne zawieraj¹ce arabsk¹ wersje liczby rzymskiej
	for(int i=0;i<nap.size()-1;i++)
	{
		c1=convert(nap[i]);//zamienia znak liczby rzymskiej i wpisuje jego arabsk¹ wersje do zmiennej
		c2=convert(nap[i+1]);//jw
		if(c1>=c2)//jeœli pierwsza jest wiêksza od drugiej to dodaje t¹ pierwsz¹ do sumy
		l+=c1;
		else// jeœli nie-odejmuje od sumy
		l-=c1;
	}
	l+=convert(nap[nap.size()-1]);//ostatni znak ZAWSZE siê dodaje
	return l;
}
//funkcja z liczby arabskiej daje liczbe rzymsk¹
void napisz(int l){
	while(l>0){//odejmuje od liczby maksymalne wartoœæi z zastrze¿eniem odejmowania np. IV-4 albo CM-900
	
		if(l>=1000){
			cout<<"M";
			l=l-1000;
		}
		else if(l>=900 && l<1000){
			cout<<"CM";
			l=l-900;
		}
		else if(l>=500 && l<900){
			cout<<"D";
			l=l-500;
		}
		else if(l>=400 && l<500){
			cout<<"CD";
			l=l-400;
		}
		else if(l>=100 && l<400){
			cout<<"C";
			l=l-100;
		}
		else if(l>=90 && l<100){
			cout<<"XC";
			l=l-90;
		}
		else if(l>=50 && l<90){
			cout<<"L";
			l=l-50;
		}
		else if(l>=10 && l<40){
			cout<<"X";
			l=l-10;
		}
		else if(l==9){
			cout<<"IX";
			l=l-9;
		}
		else if(l>=5 && l<9){
			cout<<"V";
			l=l-5;
		}
		else if(l==4){
			cout<<"IV";
			l=l-4;
		}
		else if(l>=1 && l<4){
			cout<<"I";
			l=l-1;
		}
}
cout<<endl;	//wymagane w programach spoja-zakoñczyæ wyjœcie znakiem nowej linii
}

int main(){
	string nap1;//pierwszy "napis" rzymski
	string nap2;
	int liczba;//suma 2 liczb rzysmkich w wersji arabskiej
	while(cin>>nap1>>nap2){//pêtla która pobiera nieokreœlon¹ ale skoñczon¹ liczbe wejœæ
		liczba=0;
		liczba=czyt(nap1);//dodawanie dwóch liczb
		liczba+=czyt(nap2);
		napisz(liczba);//zmienia liczbe arabsk¹ na liczbe rzymsk¹
		cin.clear();
		cin.sync();
	}
	return 0;
}

