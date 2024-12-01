#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    srand(time(NULL));
    int n, i, max, max2, max3, k;
    cin >> n ;
    int A[n];
    int B;
    for (i=1; i<n; i++){
        A[i]=rand()%20-10;
        cout<<A[i]<<" ";

    }
    cout<<endl;
    sort(A, A+n);

    for (i=1; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}
