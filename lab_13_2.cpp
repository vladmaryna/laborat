#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[n][m];

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() % 21-10;
            cout << A[i][j] << "\t ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i + j == n - 1) {
                A[i][j] = 0;
            } else {
                A[i][j] *= A[i][j];
            }
        }
    }
    cout <<"-------------------------------------------"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}