#include <iostream>
using namespace std;
int main()
{
    int ile;
    cin>>ile;
    string osoby[ile];
    double masa[ile], wzrost[ile];
    double BMI[ile];
    for(int i=0; i<ile; i++)
    {
        cin>> osoby[i]>> masa[i] >> wzrost[i];
        BMI[i] = (masa[i]/(wzrost[i]*wzrost[i])*10000);
    }
        cout<<"niedowaga"<<endl;
        for(int i=0; i<ile; i++)
        {
            if(BMI[i] < 18.5)
            {
                cout<<osoby[i]<<endl;
            }
        }
        cout<<"wartosc prawidlowa"<<endl;
        for(int i=0; i<ile; i++)
        {
            if(BMI[i] >= 18.5 && BMI[i] < 25.0)
            {
                cout<<osoby[i]<<endl;
            }
        }
        cout<<"nadwaga"<<endl;
        for(int i=0; i<ile; i++)
        {
            if(BMI[i] >= 25.0)
            {
                cout<<osoby[i]<<endl;
            }
        }
    return 0;
}