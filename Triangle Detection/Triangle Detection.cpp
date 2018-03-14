#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
float x1,y1,x2,y2,x3,y3;
float dl1,dl2,dl3;
float mx,mi1,mi2;
while(true){
    cin.clear();
    cin.sync();
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(x1==0 && y1==0 && x2==0 && y2==0 && x3==0 && y3==0)
        break;
    dl1=pow(x2-x1,2) + pow(y2-y1,2);
    dl2=pow(x2-x3,2) + pow(y2-y3,2);
    dl3=pow(x1-x3,2) + pow(y1-y3,2);
    if(dl1>=dl2 && dl1>=dl3)
    {
        mx=dl1;
        mi1=dl2;
        mi2=dl3;
    }
    if(dl2>=dl1 && dl2>=dl3)
    {
        mx=dl2;
        mi1=dl1;
        mi2=dl3;
    }
    if(dl3>=dl2 && dl3>=dl1)
    {
        mx=dl3;
        mi1=dl2;
        mi2=dl1;
    }

    if(mx==mi1+mi2){
        cout<<"P"<<endl;
    }
    if(mx>mi1+mi2){
        cout<<"R"<<endl;
    }
    if(mx<mi1+mi2){
        cout<<"O"<<endl;
    }
}
return 0;
}


