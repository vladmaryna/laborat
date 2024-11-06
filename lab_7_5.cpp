#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double h;
    cin >> h ;
    double a= exp(h)+ sqrt(1+(((pow(h,2))*pow(cos(h+2),2))/2)+ (pow(h,4)*pow(cos(h+4),4))/24);
    double b= log(a)-sqrt(4+pow(1/tan(h),2)+pow(log(a),2));
    double ch=(exp(b*h)+exp(-b*h))/2;
    double ch1=(exp(a+b)+exp(-(a+b)))/2;
    double c= pow((((pow(a,2)*pow(h,3)*pow(ch,2))/6)+pow(log((ch1)),4)),1/3);
    double d= pow(b,2)-4*a*c;
    cout << d <<endl;
    if(d>0){
        double x1=(-b-sqrt(d))/2*a;
        double x2=(-b+sqrt(d))/2*a;
        cout << x1 <<endl;
        cout << x2 <<endl;
    }
    if(d=0){
        double x=-b/2*a;
        cout << x  <<endl;
    }
    if(d<0){
        cout << "error"  <<endl;
    }
    return 0;
}