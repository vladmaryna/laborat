#include <iostream>

using namespace std;

int main() {
    int rik1, month1, day1, rik2, month2, day2;
    cout<<"vedit rik1, month1, day1";
    cin >>rik1>>month1>>day1 ;
    cout<<"vedit rik2, month2, day2";
    cin >>rik2>>month2>>day2 ;
    int ryz_rik=rik1-rik2;
    cout <<ryz_rik<<endl;
    int ryz_month=month1-month2;
    cout <<ryz_month<<endl;
    int ryz_day=day1-day2;
    cout <<ryz_day<<endl;
    int dd;
    dd=abs(ryz_rik)*365+abs(ryz_month)*30+abs(ryz_day);
    if (ryz_month*ryz_rik<0)
    {
        cout<<"1 man"<<endl;
        
        
    }
    else
    {if (ryz_month*ryz_rik>0)
    {
        cout<<"2 man"<<endl;
        
    }
    else
    {
        if (ryz_day<0)
        {
        cout<<"1 man"<<endl;
        }
        else
        {
         cout<<"2 man"<<endl;   
        }
        
    }
        
    }
    cout<<dd/365<<"rokiv";
    cout<<(dd%365)/12<<"month";
    cout<<((dd%365)%12)<<"DAY";
    
    
    
    
    
    
    return 0;
}