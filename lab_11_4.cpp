#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int A[n];
    srand(time(0));
    for (int i = 0; i < n+1; i++) {
        A[i] = rand() % 20-10;
        cout << A[i]<<" ";
    }
    cout<<endl;

    for (int i = 0; i < n+1; i += 2) {
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n+1; i++) {
        if (A[i] % 2 != 0) {
            cout << A[i] << " ";
        }
    }
    cout << endl;


    return 0;
}
