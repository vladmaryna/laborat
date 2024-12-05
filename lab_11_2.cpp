#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int A[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 21 - 10 ;
        cout << A[i] << " ";
    }
    cout << endl;


    for (int i = 0; i < n - 1; i++) {
        int max = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] > A[max]) {
                max= j;
            }
        }
        // Обмін елементів
        if (max != i) {
            double temp = A[i];
            A[i] = A[max];
            A[max] = temp;
        }
    }


    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}