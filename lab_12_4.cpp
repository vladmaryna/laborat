#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int k;
     
    if(n<0){
        n=-n;
    }
    while (n>0){
        int n1=n%10;
        
        if (n1%2==0){
            k++;
           
        }
        n/=10;
    }
    
    cout << k << endl;
    
    return 0;
    
}