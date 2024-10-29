
#include <iostream>
using namespace std;



double max(double i,double m) {
    return (i > m) ? i:m ;
}

double max_(double i, double m, double v) {
    return max(max(i, m), v);
}

int main() {
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    
    cout << (max(a, a + b) + max(a, b + c)) / (1 + max_(a + b * c, b - c, 25));

    return 0;
}