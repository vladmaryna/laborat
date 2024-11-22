 #include <math.h>
#include <iostream>
using namespace std;
int main() {
    double x, y, s, f;
    cout << "x  y";
    cin >> x >> y;
    if ((y<=-x && (pow(x,2)+pow(y,2))<=4) || (x>=-2 && (pow(x,2)+pow(y,2))<=4)) {
        cout<<"yes"<<endl;
    }
    else {
        cout<<"no"<<endl;
    }
    return 0;
}