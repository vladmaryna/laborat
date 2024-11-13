#include <math.h>
#include <iostream>
using namespace std;

int main()
{ 
    float x, y;
    cin >>x>>y ;
    if((pow(x,2)-pow(y,2))<9 && x>0)
    {
        cout << "pop u pivcolo" << endl;
    }
    if(((((x+3)/(y-3))-((x)/(y)))>0)&& (y<3)&&(x<0)){
        cout<<"yes"<<endl;
    }
    if(((((x+3)/(y+3))-((x)/(y)))<0) && (y>-3)&&(x<0)){
        cout<<"yes1"<<endl;
    }
    return 0;
}