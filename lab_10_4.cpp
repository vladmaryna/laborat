#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    int A[n];
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        A[i]=rand()%400-200;
        cout << A[i] << ' ';
    }
    cout << endl;

    int k=0;
    for (i = 0; i < n; i++)
    {
        if ((A[i] > 0 && A[i + 1] < 0) || (A[i] < 0 && A[i + 1] > 0)) {

            k++  ;
        }
    }
    cout<<k<<endl;




    return 0;
}
