#include <iostream>
using namespace std;

int main() {
    double ser1, ser;
    int n, m;
    cin >> n>> m;
    int A[n][n];
    srand(time(NULL));
    for( int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            A[i][j]=rand()%21-10;
            cout << A[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"=================================="<<endl;
    int sum=0;

    for( int i=0; i<n; i++){
        int max=A[i][0];
        for(int j=0; j<m; j++){
            if (A[i][j]>max){
                max=A[i][j];

            }

        }
        sum+=max;
    }
    cout<<"sum "<<sum<<endl;


    return 0;
}