#include  <iostream>
using namespace std;

 int  main() {
    int n,k=0;
    cin>>n;
    int A[n];
    int Z[n];
    srand(time(NULL));
    for(int i=0;i<n;i++) {
        A[i]=rand()%20-10;
        cout<<A[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++) {
        if (A[i]<0) {
            Z[k]=A[i];
            k++;
        }
    }
    cout<<"k"<<k<<endl;
    for(int i=0;i<n-1;i++) {
        int min=i;
        for (int j=i+1; j<k; j++) {
            if (Z[j]<Z[min]) {
                min=j;

            }
        }

        if (min != i) {
            int temp = Z[i];
            Z[i] = Z[min];
            Z[min] = temp;
        }
    }
    for (int i=0;i<k;i++) {
        cout<<Z[i]<<" ";
    }
    cout<<endl;
    return 0;
}