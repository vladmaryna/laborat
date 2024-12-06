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
    cout<<"=================================="<<endl;
    for(int p=0;p<2;p++){
        int max=A[0][0];
        int i_max=0;
        int j_max=0;

        for( int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if (A[i][j]>max){
                    max=A[i][j];
                    i_max=i;
                    j_max=j;
                }


            }
        }
        cout<< max<< endl;
        A[i_max][j_max]=0;
    }
    cout<< "-------------------------------"<< endl;
    for( int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << A[i][j]<<"\t";
        }
        cout<< endl;
    }
    return 0;

}