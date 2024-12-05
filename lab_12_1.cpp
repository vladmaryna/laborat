 #include <iostream>
using namespace std;
int main() {
    int n, p;
    cin >> n ;
    double sum = 0;
    int k = 0;



    for (int i = 0; i < n; i++) {
        cin >> p;


        if (p > n) {
            break;
        }

        if (p > 0) {
            sum += p;
            k++;
        }
    }


    if (k > 0) {
        double ser = sum / k;
        cout << ser << endl;
    } else {
        cout << "vse pohano" << endl;
    }

    return 0;
}