#include <iostream>
using namespace std;

int main () {
    int n,t;
    cin>>n;
    int A[n];
    int B[n];
    srand(time(NULL));
    for(int i=0;i<n;i++) {
        A[i]=rand()%21-10;
        cout<<A[i]<<" ";
    }
    cout<<endl;
    cout<<"_______________________________"<<endl;


    int max=A[0];
    int min=A[0];
    for(int i=0;i<n;i++) {

        if (A[i]<min) {
            min=A[i];

        }
        if (A[i]>max) {
            max=A[i];
        }
    }
    cout<<"max"<< max<< endl;
    cout<<"min"<< min<<endl;

    for (int i = 0; i<=n;i++){
        if (A[i]== max){
            B[i] = min;
        }
        else if (A[i]== min){
            B[i] = max;
        }

        else {
            B[i] = A[i];
        }
    }

    for(int i=0;i<n;i++) {
        cout<<B[i]<<" ";

    }
    cout<<endl;

    return 0;
}