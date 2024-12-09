#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[n][m];

    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = rand() % 20-10;
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
    int p=m/2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j < p && j >= 0) {
                int t=A[i][j];
                A[i][j]=A[i][m-1-j];
                A[i][m-1-j]=t;
            }
        }
    }
    cout<<"-------------------------------"<<endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << A[i][j] << "\t";

        }
        cout << endl;
    }

    return 0;
}