 #include <math.h>
#include <iostream>
using namespace std;
int main() {
    double x, y, s, f;
    cout << "x  y";
    cin >> x >> y;
    f=(exp(x)-exp(-x))/2;
    if(fabs(x*y)>10) {
        s=fabs(f)+log(y);
        cout<<"s1="<<s<<endl;
    }
    if(fabs(x*y)<=10 && fabs(x*y)>5) {
        s=exp(f+y);
        cout<<"s2="<<s<<endl;
    }
    if( fabs(x*y) == 5  ) {
        s=sin(x)-tan(y);
        cout<<"s3="<<s<<endl;
    }
    else {
        cout<<"error"<<endl;
    }
    return 0;
}