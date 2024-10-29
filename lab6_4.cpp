#include <iostream>

using namespace std;

int main() {
    double x, y;

    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "1 chv" << endl;
    }
    else if (x < 0 && y > 0) {
        cout << "2 chv" << endl;
    }
    else if (x < 0 && y < 0) {
        cout << "3 chv" << endl;
    }
    else if (x > 0 && y < 0) {
        cout << "4 chv" << endl;
    }
    else if (x == 0 && y == 0) {
        cout << "00" << endl;
    }
    else if (x == 0) {
        cout << " toch A na osy OY" << endl;
    }
    else if (y == 0) {
        cout << "toch A na osy OX" << endl;
    }

    return 0;
}
