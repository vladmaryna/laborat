#include <iostream>
using namespace std;
int main() {
    int a, b, x;
    cin >> a >> b;
    for ( x= a; x <= b; x++) {
        double f=(x+x)/5.0;
        cout << "f"<<x<<"="<< f << endl;
    }
    return 0;
}