#include <iostream>
using namespace std;

int main() {
    double ser1, ser;
    int n, m ;
    cin >> n>> m;
    int A[n][m];
    int B[n][m];
    int C[n][m];
    srand(time(NULL));
    for( int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            A[i][j]=rand()%21-10;
            cout << A[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"----------------B------------------"<<endl;
    for( int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            B[i][j]=rand()%21-10;
            cout << B[i][j]<<"\t";
        }
        cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout<<"--------------C---------------------"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
return 0;
}