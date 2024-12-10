#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int A[n][m];
    srand(time(NULL));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            A[i][j]=rand()%20;
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }

    int sum=0;
    for(int i=0;i<n;i++) {
        sum=0;
        for(int j=0;j<m;j++) {
            sum+=A[i][j];
        }
        if(sum>0) {
            cout<<"sum"<<sum<<endl;

            for(int i=0;i<m;i++) {
                for(int j=0;j<m;j++) {
                    A[i][j]-=sum;
                    cout<<A[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
    }

    return 0;

    }



