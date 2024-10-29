#include <iostream>
using namespace std;
int main() {
    double a, b, c;
    cin >>a>>b>>c;
    if (a+b>c && a+c>b && b+c>a) {
        if(a==b && b==c) {
            cout<<"rivnostor"<<endl;
        }
        if(a==b || b==c || c==a) {
            cout<<"rivnobedr"<<endl;
        }
        if(a!=b && b!=c && c!=a) {
            cout<<"riznostor"<<endl;
        }
    }
    else{
            cout<<"ERROR"<<endl;
        }



    return 0;
}
