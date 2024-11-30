#include <iostream>
using namespace std;


int main() {

    int n;
    cout << "n";
    cin >> n;
    int A[n];

    srand(time(0));
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 20-10;
        cout << A[i] << " ";
    }
    cout << endl;


    for (int i = n - 1; i >= 0; i--) {
        cout << A[i] << " ";
    }

    return 0;
}