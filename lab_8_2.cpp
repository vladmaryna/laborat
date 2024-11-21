#include <math.h>
#include <iostream>
using namespace std;

int main()
{ 
    int n;
    char t;
    cin >> n>>t;
    switch(n){
    
        case 0:
        {
        cout << "prodov ru" <<endl;
        break;
        }
        case 1:{
        cout << "na livo" <<endl;
        break;
        }
        case -1:{
        cout << "na pravo" <<endl;
        break;
        }
    }
    switch(t){
        case 'w':{
        cout << "z" <<endl;
        break;
        }
        case 'e':{
        cout << "s" <<endl;
        break;
        }
        case 'n':{
        cout << "pn" <<endl;
        break;
        }
        case 's':{
        cout << "pd" <<endl;
        break;
        }
    }

    return 0;
}
