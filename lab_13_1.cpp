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
    cout <<"-------------------------------"<<endl;
    cout << "hol diaho: " << endl;
    for (int i = 0; i < n && i < m; i++) {
        cout << A[i][i] << " ";
    }
    cout << endl;
    cout << "1 spusok ";
    for (int i = 0; i < n; i++) {
        cout << A[i][0] << "\t";
    }
    cout << endl;

return 0;
}