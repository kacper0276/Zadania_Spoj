#include <iostream>
#include <iomanip> 
using namespace std;

int main()
{
    double m16,k16,m36,k36;  
    int im16,ik16,im36,ik36; 
    cin>>m16>>k16>>m36>>k36;
    cin>>im16>>ik16>>im36>>ik36;
    double wynikkobiet = (((k16*ik16) + (k36*ik36))/(ik16 + ik36));
    double wynikmezczyzn = (((m16*im16) + (m36*im36))/(im16 + im36));
    double wynikwszystkich = (((k16*ik16) + (k36*ik36) + (m16*im16) + (m36*im36))/(ik16 + im16 + ik36 + im36));
    cout<<"K16K36: "<<fixed<<setprecision(2)<<wynikkobiet<<endl;
    cout<<"M16M36: "<<fixed<<setprecision(2)<<wynikmezczyzn<<endl;
    cout<<"M16K16M36K36: "<<fixed<<setprecision(2)<<wynikwszystkich<<endl;

    return 0;
}
