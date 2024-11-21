#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, znach, pi=3.14;
    cout << "a    b";
    cin >> a >> b;
    if(a>b) {
        znach=(pow(a,2)-1)/(1+pow(sin(a),2));
        cout << znach<<" a>b"<<endl;
    }
    else {
        znach=1/(1+sin(pi-b));
        cout << znach<<" else"<<endl;
    }

    return 0;
}