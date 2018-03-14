#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;
double r, d, S, r2;
double PI=3.141592654;




int main()
{

    cin>>r>>d;
    r2 = sqrt((r*r)-((d*d)/4));
    S=PI*r2*r2;
    cout.setf(ios::fixed);

    cout<<fixed<<setprecision(2)<<S;



    return 0;

}
