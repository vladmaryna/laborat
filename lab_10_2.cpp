#include <iostream>
#include <cmath>
using namespace std;

int main() {
    srand(time(NULL));
    int n, i, max, min, max_pos, min_pos;
    cin >> n;
    int A[n];
    for (i = 0; i < n; i++) {
        A[i] = rand() % 20 - 10;
        cout << A[i] << " ";
    }
    max = A[0];
    min = A[0];
    for (i = 1; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
            max_pos = i;
        }
        if (A[i] < min) {
            min = A[i];
            min_pos = i;
        }
    }
    cout << endl;
    cout << "min" << " " << min << ":" << min_pos << endl;
    cout << "max" << " " << max << ":" << max_pos << endl;

    return 0;
}
