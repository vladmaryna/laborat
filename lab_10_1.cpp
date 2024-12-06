#include <iostream>
using namespace std;

int main()
{
     int n;
     cin >> n ;
     
     int A[n];
     srand(time(NULL));
     for(int i =0; i<n; i++){
         A[i]=rand()%21-10;
         cout << A[i]<< " " ;
     }
     cout<<endl;
     for(int i=0; i<n; i++){
         if (A[i]%2==0){
             cout<<A[i]<<endl;
         }
     }
     cout<<"-------------------"<<endl;
     for(int i=0; i<n; i++){
        if (A[i]%2!=0 && A[i]<10){
             cout<<A[i]<<" ";
         }
     } cout<< endl;
     return 0;
 }
 