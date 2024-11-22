#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, x, y ;
    cout <<"a, b, c" ;
    cin >> a >> b >> c ;
    cout<<"x, y " ;
    cin>> x >> y ;
    if ((a <= x && b <= y) || (a <= y && b <= x) || (a <= x && c <= y) || (a <= y && c <= x) ||(b <= x && c <= y) || (b <= y && c <= x)){
        cout<<"proide"<<endl;
    }
    else{
        cout<<"vse pohano"<<endl;
    }
return 0;
    
}