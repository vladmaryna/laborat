#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double A[n], B[n];
    int k_dod= 0, k_vid = 0;
    srand(time(0));

    for (int i = 0; i < n+1; i++) {
        A[i] = rand() % 20 - 10;
        cout << A[i] << " ";
        if (A[i] > 0) {
            k_dod++;
        }
    }

    for (int i = 0; i < n+1; i++) {
        B[i] = rand() % 20 - 10;
        cout << B[i] << " ";
        if (B[i] < 0) {
            k_vid++;
        }
    }
    cout << endl;


    if (k_dod > k_vid) {
        for (int i = 0; i < n+1; i++) {
            cout << pow(A[i], 2) + pow(B[i], 2) << " ";
        }
    } else if (k_dod < k_vid) {
        for (int i = 0; i < n+1; i++) {
            cout << pow(A[i], 2) - pow(B[i], 2) << " ";
        }
    } else {
        for (int i = 0; i < n+1; i++) {
            cout << pow(A[i], 3) + pow(B[i], 3) << " ";
        }
    }
    cout << endl;

    return 0;
}