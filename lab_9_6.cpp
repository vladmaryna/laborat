#include <iostream>
using namespace std;

int main() {
    double p=-5.5, n, h, sum=0;
    cout<<"ost zna";
    cin >>n;
    cout<<"krok";
    cin>>h;
    for (double i=p;i<=n; i+=h) {
        sum+=i;

    }
    cout<<sum<<endl;

    return 0;
}