#include <iostream>
using namespace std;

int main() {

    int n, m;
    cin>>n>>m;
    int A[n][m];

    srand(time(NULL));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            A[i][j]=rand()%20-10;
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"----------------------"<<endl;
    for(int i=0;i<n;i++) {
        int min=A[0][m];
        for(int j=0;j<m;j++) {
            if(A[i][j]<min) {

            min=A[i][j];
            }


        }
        cout<<min<<" ";
    }

    return 0;
}