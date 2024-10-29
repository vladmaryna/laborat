#include <iostream>
using namespace std;

  int main()
  {
      double x, y;
      cout << "Vedit 2 ch";
      cin >> x;
      cin >> y;
      if (x<y){
          cout <<"chslo"<<x<<"<"<<y<<endl;
      }
      else if (y<x){
          cout<<"chslo"<<y<<"<"<<x<<endl; 
      }
      else{
          cout<<"rivni"<<endl;
      }

return 0;
}