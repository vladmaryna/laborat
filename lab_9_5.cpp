#include <iostream>
using namespace std;

int main() {
    double p= 2.4, n, t; 
    cin >>n>>t ;

    cout << "Кількість\tВартість" << endl;
    for (int i= n; i<=t ; i++) {
        double pr= i * p;
        cout << i << "\t\t" << pr << " грн" << endl;
    }

    return 0;
}