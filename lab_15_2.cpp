#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;
    int A[n];
    srand(time(NULL));
    for( int i=0; i<n; i++){
            A[i]=rand()%21-10;
            cout << A[i]<<" ";
        }
        cout<<endl;
    int max=A[0];
    int max_index=0;
    for (int i=1; i<n; i++) {
        if (A[i]>max) {
            max=A[i];
            max_index=i;
        }
    }
    cout<<max_index<<" ";

return 0;
}