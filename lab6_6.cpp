#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, x0, y0, R ;
    
    cout << "x,y" ;
    cin >>x>>y;
    
    cout << "x0,y0" ;
    cin >>x0>>y0;
    
    cout << "R" ;
    cin >>R;
    
    double d=sqrt(pow((x-x0),2)-pow((y-y0),2)); 
    
    if (d<=R){
        cout << "Na koli"<< endl;
    }
    else{
        cout<<"Ne na koli"<<endl;
    }

    return 0;
}
