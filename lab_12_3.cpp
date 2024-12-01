#include <iostream>
using namespace std;

int main() {

    for (int i = 1000; i <= 9999; i++) {
        int sum = 0, n = i;


        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        if (sum == 27) {
            cout << i << " ";
        }

    }

    cout << endl;

    return 0;

}