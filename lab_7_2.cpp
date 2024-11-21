#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, znach;
    cout << "a    b";
    cin >> a >> b;
    
    znach=a+((a+b-1)/(pow(a,2)+1))-a*b;

    cout << "znach = " << znach << endl;

    return 0;
}