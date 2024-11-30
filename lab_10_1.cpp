#include <iostream>
using namespace std;

int main() {
    srand(time(NULL));
    int n, i;
    cin >> n;
    int A[n];
    int B[n];
    int C[n];
    for (i = 1; i <= n; i++) {
        A[i] = rand() % 20 - 10;
        cout << A[i] << ' ';
    }
    cout << endl;
    for (i = 1; i <= n; i++) {
        if (A[i] % 2 == 0) {
            B[i] = A[i];
            cout << B[i] << endl;
        }
    }
    for (i = 1; i <= n; i++) {
        if (A[i] % 2 != 0 && A[i] < 10) {
            C[i] = A[i];
            cout << C[i] << ' ';
        }
    }
    return 0;
}
