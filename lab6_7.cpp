#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, d, c=0;
    
    cout << "n" ;
    cin >> n ;
    
    cout << "d" ;
    cin >> d ;
    
    
    if (n<10000 || n>99999){
        cout<<"error";
        return 1;
    }
    int t=n;
    while (t>0){
        if(t%10==d){
            c++;
        }
        t/=10;
    }
    cout<<c<<"raz"<<endl;
    return 0;
}
