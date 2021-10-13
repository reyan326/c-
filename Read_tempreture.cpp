/******************************************************************************
Write a program to read temperature in centigrade and display a suitable message
according to temperature state below : Go to the editor
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int temp;
    cout<<"Enter the temperature in centigrade = ",cin>>temp;
    
    if(temp<0)
       cout<<"Freezing weather"<<endl;
    else if(temp>0 && temp<=10)
        cout<<"Very Cold weather"<<endl;
    else if(temp>10 && temp<=20)
        cout<<"Cold weather"<<endl;
    else if(temp>20 && temp<=30)
        cout<<"Normal in Temp"<<endl;
    else if(temp>30 && temp<40)
        cout<<"Its hot"<<endl;
    else
        cout<<"Its very hot"<<endl;
    

    return 0;
}
