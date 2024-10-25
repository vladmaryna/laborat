#include <iostream>
using namespace std;

  int naib(int a,int b)
  {
  while(b!=0){
      int t=b;
      b=a%b;
      a=t;
  }
  return a;
  
  }
  int main(){
      int a, b, res;
      cout << "2 ch";
      cin >> a>> b ;
      res=naib(a,b);
      cout <<"naib"<<res<<endl;

return 0;
}

