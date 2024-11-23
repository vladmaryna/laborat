#include <iostream>
using namespace std;

int main() {
   int a, b, n;
   cout<<"a, b, n";
   cin>>a>>b>>n;
   for(int i=a; i<=b; i++){
      if((i%n)!=0){
          cout<<i<<endl;
      }
   }
   
    return 0;
}