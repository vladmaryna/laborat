#include <iostream>
using namespace std;

int main() {
    double ser1, ser;
    int n;
    cin >> n;
    int A[n][n];
    int B[n][n];
    int C[n][n];
    int D[n][n];
    srand(time(NULL));
    for( int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            A[i][j]=rand()%21-10;
            cout << A[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"----------------B------------------"<<endl;
    for( int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            B[i][j]=rand()%21-10;
            cout << B[i][j]<<"\t";
        }
        cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout<<"--------------C---------------------"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            D[i][j] = A[i][j] - B[i][j];
        }
    }

    cout<<"--------------D---------------------"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << D[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}