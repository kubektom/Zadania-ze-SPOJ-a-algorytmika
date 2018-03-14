#include <iostream>
#include <cstdio>
#include <cstring>
#include <ctime>
using namespace std;
//funkcja kt�ra zamienia znaki rzymskie na arabskie- bd wiedzia� o co chodzi
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
//funkcja zamienia rzymsk� liczbe na arabsk�
int czyt(string nap)
{
	int l=0;//zmienna przechowuje liczbe arabsk�
	int c1,c2;//zmienne zawieraj�ce arabsk� wersje liczby rzymskiej
	for(int i=0;i<nap.size()-1;i++)
	{
		c1=convert(nap[i]);//zamienia znak liczby rzymskiej i wpisuje jego arabsk� wersje do zmiennej
		c2=convert(nap[i+1]);//jw
		if(c1>=c2)//je�li pierwsza jest wi�ksza od drugiej to dodaje t� pierwsz� do sumy
		l+=c1;
		else// je�li nie-odejmuje od sumy
		l-=c1;
	}
	l+=convert(nap[nap.size()-1]);//ostatni znak ZAWSZE si� dodaje
	return l;
}
//funkcja z liczby arabskiej daje liczbe rzymsk�
void napisz(int l){
	while(l>0){//odejmuje od liczby maksymalne warto��i z zastrze�eniem odejmowania np. IV-4 albo CM-900
	
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
cout<<endl;	//wymagane w programach spoja-zako�czy� wyj�cie znakiem nowej linii
}

int main(){
	string nap1;//pierwszy "napis" rzymski
	string nap2;
	int liczba;//suma 2 liczb rzysmkich w wersji arabskiej
	while(cin>>nap1>>nap2){//p�tla kt�ra pobiera nieokre�lon� ale sko�czon� liczbe wej��
		liczba=0;
		liczba=czyt(nap1);//dodawanie dw�ch liczb
		liczba+=czyt(nap2);
		napisz(liczba);//zmienia liczbe arabsk� na liczbe rzymsk�
		cin.clear();
		cin.sync();
	}
	return 0;
}

