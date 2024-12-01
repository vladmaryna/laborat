#include <iostream>

using namespace std;

int main() {
    int n ;
    cin >> n;
    double A[n][n];
    srand(time(0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 21 - 10;
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    
    cout << "hol diaho:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i][i] << " ";
    }
    cout<<endl;
    cout << "bichna diaho:" << endl;
    for (int i = 0; i < n; i++) {
        cout << A[i][n - i - 1] << " ";
    }
    cout << endl;

    return 0;
}
