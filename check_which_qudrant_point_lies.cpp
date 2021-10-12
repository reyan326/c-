/*  Write a C program to accept a coordinate point in a XY coordinate system
    and determine in which quadrant the coordinate point lies.*/
   
#include <iostream>
#include <cmath>

using namespace std;

int main()
{ 
    float x, y;
    cout<<"Enter your coordinate in x and y = ",cin>>x>>y;
    if(x>0 && y>0)
    {
        cout<<"The coordinate point "<<"("<<x<<","<<y<<")"<<" lies in the First quadrant."<<endl;
    }
   else if(x<0 && y>0)
   {
       cout<<"The coordinate point "<<"("<<x<<","<<y<<")"<<" lies in the second quadrant."<<endl;
   }
   else if(x<0 && y<0)
   {
       cout<<"The coordinate point "<<"("<<x<<","<<y<<")"<<" lies in the third quadrant."<<endl;
   }
   else if(x>0 && y<0)
   {
       cout<<"The coordinate point "<<"("<<x<<","<<y<<")"<<" lies in the fourth quadrant."<<endl;
   }
  
 
  
    return 0;
}
