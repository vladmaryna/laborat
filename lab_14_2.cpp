#include <iostream>
using namespace std;

int main() {
    int n, m;

    cin >> n;
    cin >> m;

    int A[n][m], B[n][m];


    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() % 20 - 10;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "-----------------------B---------------------" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            B[i][j] = rand() % 20 - 10;
            cout << B[i][j] << " ";
        }
        cout << endl;
    }


    for (int j = 0; j < m; j += 2) {
        for (int i = 0; i < n; i++) {
            A[i][j] = B[j][i];
        }
    }


    cout << "---------------------A------------------------" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}