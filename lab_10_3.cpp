#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin >> n;
    double A[n];
    srand(time(NULL));
    for (i = 0; i < n; i++)
    {
        A[i]=(rand()%20-10)/1.0;
        cout << A[i] << ' ';
    }
    cout << endl;

    for (i = 0; i < n; i++)
    {
        if ((i)%2==0)
        {
            A[i]+=2;
        }
        else
        {
            if(A[i]!=0)
            {
                A[i]= (1.0 / A[i]);


            }
        }
    }

    for (i = 0; i < n; i++) {
        cout << A[i] << ' ';
    }
    cout << endl;


    return 0;
}
