#include <math.h>
#include <iostream>
using namespace std;

int main()
{ 
    double A, B, C;
    cout <<"A, B, C";
    cin >>A>>B>>C;
    if(A>B && A>C && B>C){
        cout<<"A^2 "<<pow(A,2)<<endl;
        cout<<"B^2 "<<pow(B,2)<<endl;
        cout<<"C^2 "<<pow(C,2)<<endl;
    }
    else{
        cout<<"A*2 "<<A*2<<endl;
        cout<<"B*2 "<<B*2<<endl;
        cout<<"C*2 "<<C*2<<endl;
    }

    return 0;
}