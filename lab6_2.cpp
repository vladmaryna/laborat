#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x, f;
    cin >>x;
    if (x<=2) {
        f=pow(x,2)+5*x-6;
        cout<<f<<endl ;
    }
    else {
        f=abs(x+cos(x));
        cout<<f<<endl ;
    }

    return 0;
}