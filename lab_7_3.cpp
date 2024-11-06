#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;
    cin >> x>>y ;
    if((x>0&& x<1 && y>1 && y<2) || (x>1 &&x<2&& y>2&&y<3) || (x>4&& x<5 && y>2&&y<3 ) || (x>5&& x<6 && y>1 && y<2) || (x>0&& x<1 && y>-2 && y<-1) || (x>5&& x<6 && y>-2 && y<-1)|| (x>2&& x<4 && y>-3 && y<-2) || (((pow((x-3),2)/2+pow((y-1),2)/1))<1) || (pow((x-2),2)+pow((y+1),2)<1) || (pow((x-4),2)+pow((y+1),2)<1))
    {
        if((pow(x,2)*y-2)>0){
            double u= pow(x,2)*y- sqrt(pow(x,2)*y-1)+log(pow(x,2)*y-2);
        cout << u << endl;
        }
        else{
            cout<< "error" <<endl;
        }
    }
    else {
        if((pow(y,2)*x-1)>0 && (pow(y,2)*x+1)>0){
        double u=pow(y,2)*x-sqrt(pow(y,2)*x+1)+log10(pow(y,2)*x-1);
        cout << u << endl;
        }
        else{
            cout<< "error" <<endl;
        }
    }
    return 0;
}