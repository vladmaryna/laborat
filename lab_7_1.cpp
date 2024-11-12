#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, p;
     p=3,14;
    cout <<"a, b";
    cin >>a>>b ;
    double result;
    if(a>b){
        result=(pow(a,2)-1)/(1+pow(sin(a),2));

    }
    else{
        result=1/(1+sin(p*b));
        if(abs(1+ sin(p*b))*pow(10,-25)){
            result=pow(10,100);
        }
    }
    cout<< result<<endl;
    return 0;
}