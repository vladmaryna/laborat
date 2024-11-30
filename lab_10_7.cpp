#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    double M[n];
    double P[n];
    double t;
    srand(time(NULL));
    for(int i=0;i<n;i++) {
        M[i]=rand()%1000+500;
        P[i]=rand()%5000+1000;
        cout<<"Dusk"<<i+1<<": "<< M[i]<<" gb "<< P[i]<< " grn "<<endl;

    }
    cout<<"vedit t ";
    cin>>t;


    for(int i=0;i<n;i++) {
        if(P[i] > t) {
            cout<<"Dusk "<<i+1<<": "<< M[i]<<" gb "<<endl;
        }



    }

    return 0;
}