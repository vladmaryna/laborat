#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    int B[n];
    srand(time(NULL));
    for(int i=0;i<n;i++) {
        A[i]=rand()%20-10;
        cout<<A[i]<<" ";
    }
    cout<<endl;

    int k=0;
    for(int i=0;i<n;i++) {
        if(A[i]>0) {
            B[k]=A[i];
            k++;
        }
    }
    cout<<'k'<<k<<endl;

    for(int i=0;i<k;i++)
    {
        for (int j=0;j<k-i-1;j++)
        {
            if (B[j] > B[j + 1])
            {
                double t = B[j];
                B[j] = B[j + 1];
                B[j + 1] = t;

            }
        }
    }

    for (int i = 0; i < k; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}