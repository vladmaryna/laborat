#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    int A[n][m];

    srand(time(NULL));


    cout << "_______________A_______________" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() % 21 - 10;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }


    int min = A[0][0], max = A[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] < min) {
                min = A[i][j];
            }
            if (A[i][j] > max) {
                max = A[i][j];
            }
        }
    }


    int min_k = 0, max_k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == min) {
                min_k++;
            }
            if (A[i][j] == max) {
                max_k++;
            }
        }
    }


    cout << "MIN: " << min << " K: " << min_k << endl;
    cout << "MAX: " << max << " K: " << max_k << endl;

    return 0;
}