##include <iostream>
using namespace std;

int main() {
    int n, k_dod, k_vid;
    cin >> n;
    int A[n];
    srand(time(NULL));
    for (int i = 0; i < n+1; i++) {
        A[i]=rand()%20-10;
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n+1; i++) {
        if (A[i]>0) {
            k_dod++;
        }
        else if (A[i]<0) {
            k_vid++;
        }
    }
    cout <<"dod "<< k_dod << endl;
    cout <<"vid " << k_vid << endl;
    if (k_dod>k_vid) {
        cout << "dod>vid" << endl;
    }
    else if (k_dod<k_vid) {
        cout << "dod<vid" << endl;
    }
    else {
        cout<<"dod=vid"<<endl;
    }
    return 0;
}
