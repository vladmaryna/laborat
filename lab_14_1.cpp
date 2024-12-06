 #include <iostream>
using namespace std;

int main() {
    double ser;
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


    for( int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (A[i][j]>max){
                max=A[i][j];

            }
            if (A[i][j]<min) {
                min=A[i][j];

            }
        }
    }
    ser=((min+max)/2)*1.0;
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<"ser="<< ser <<endl;

    return 0;
}

