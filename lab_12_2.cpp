#include <iostream>

using namespace std;

int main() {
    int price=1700000;

    int sum = 0, months = 0;

    srand(time(0));
    while (sum <price) {
        int hab = rand() % 150001;
        sum += hab;
        months++;
    }

    cout << "\n potribno" << months << " months" << endl;

    return 0;
}