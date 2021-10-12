/* Write a C program to accept the height of a person in centimeter and
   in centimeter and categorize the person according to their height*/
   
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float height;
    
    cout<<"Enter your height in centimeter = ",cin>>height;
    
    if(height<150.0)
    {
        cout<<"The person is dwarf.";
    }
    else if(height>150.0 && height<165.0)
    {
        cout<<"your height is avg.";
    }
    else if(height>165.0 && height<195.0)
    {
       cout<<"The person is  taller";
    }
    else
    {
        cout<<"Abnormal height.";
    }
    
    return 0;
}
