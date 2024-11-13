#include <math.h>
#include <iostream>
using namespace std;

int main()
{ 
    double a, b, c, d, p, y, m1, m2, m;
    p=3,14;
    cout <<"a, b, c, d";
    cin >>a>>b>>c>>d;
    
    double x=sqrt(abs(cos(pow(a,2)*(c+1))+sin(p*d+a)));
    cout<<x<<"x"<<endl;
    if(16+pow(1/tan(exp(d)),2)>0){
        
        y=tan(b)-c*sqrt(16+pow(1/(tan(exp(d))),2));
        cout<<y<<"y"<<endl;
    }
    else{
        cout<< "error"<<endl;
        
    }
    if(x>y){
        m1=x;
    }
    else{
        m1=y;
    }
    if(a>b && a>c){
        m2=a;
    }
    if (b>a && b>c){
        m2=b;
    }
    else{
        m2=c;
    }
    if(m1>m2 && (1+pow(sin(x),2))>0){
        m=(pow(x,2)-1)/(1+pow(sin(x),2));
    }
    if(m1<=m2 && (1-y)>0){
        m=(sqrt(pow(y,3)-pow(x,4)+1))/(1-y);
    }
    cout<<"m1= "<<m1<<endl;
    cout<<"m2= "<<m2<<endl;
    cout<<"m= "<<m<<endl;
    

    return 0;
}