#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){

    int zakres;
    int k;
    cout<<"podaj zakres liczb pierwszych(od i do ...)"<<endl;
    cin>>zakres;
   int *tab=new int[zakres];
    for (int j=0;j<zakres;j++)
{
    tab[j]=1;
}
for (int j=2;j<round(sqrt(zakres));j++){
    k=2;
    while(j*k<=zakres-1){
        tab[j*k]=0;
        k++;
    }
}
int z=0;
for (int j=0;j<zakres;j++)
{

    if(tab[j]==1){
        cout<<j<<"  ";
        z++;
        if(z%10==0)
            cout<<endl;
    }
}


delete tab;
return 0;
}
