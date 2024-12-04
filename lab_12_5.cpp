#include <iostream>
using namespace std;

int main() {
    int n, pos, k ;
    cin >> n;
    double T[n];
    srand(time(0));

    for (int i = 0; i < n; i++) {
        T[i] = rand() % 21 - 10;
        cout << T[i] << " ";
        }
        
        cout << endl;
        
    for (int i = 0; i < n; i++){
        if (T[i]<0){
            pos+=i;
            k++;
        }
    }
    
    if(k>0){
        double a=pos/k;
        cout<<"ser"<<a<<endl;
    }
    
    else{
        cout<<"vid nema"<<endl;
    }
    
    
    return 0;
    
}