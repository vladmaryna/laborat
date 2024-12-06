#include <iostream>
using namespace std;

int main() {
    double ser1, ser;
    int n, m ;
    cin >> n>> m;
    int A[n][m];
    srand(time(NULL));
    for( int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            A[i][j]=rand()%21-10;
            cout << A[i][j]<<"\t";
        }
        cout<<endl;
    }

    int max=A[0][0];
    int min=A[0][0];
    int i_min=0;
    int j_min=0;
    int i_max=0;
    int j_max=0;

    for( int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (A[i][j]>max){
                max=A[i][j];
                i_max=i;
                j_max=j;
            }
            if (A[i][j]<min) {
                min=A[i][j];
                i_min=i;
                j_min=j;
            }
        }
    }
    cout<<max<<"   i "<<i_max<<"  j "<<j_max<<endl;
    cout<<min<<"  i "<<i_min<<"  j "<<j_min<<endl;
    return 0;
}
