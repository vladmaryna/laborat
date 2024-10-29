#include <iostream>
using namespace std;

  int main()
  {
      double x, y;
      cout << "Vedit 2 ch";
      cin >> x;
      cin >> y;
      if (x==0 && y==0){
          cout<< "tochka na poch koord";
      }
      else if (x==0){
          cout<<"Na osy oy";
      }
      else if (y==0){
          cout<< "na osy ox";
      }
      else if (x>0 && y>0){
          cout<< "1 chv";
      }
      else if (x<0 && y>0){
          cout<< "2 chv";
      }
      else if (x<0 && y<0){
          cout<< "3 chv";
      }
      else if (x>0 && y<0){
          cout<< "4 chv";
      }

return 0;
}