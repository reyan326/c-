/******************************************************************************
 Write a C program to check whether a triangle can be formed by the given value for the angles
*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int sum;    
  float A, B, C;
  cout<<"Enter angle of triangle = "<<endl;
  cin>>A;
  cin>>B;
  cin>>C;
  sum = A + B + C;
  if(sum == 180)
    cout<<"Sum of angle of triangle is 180 degree so it is triangle"<<endl;
  else
     cout<<"Sum of angle of triangle is not 180 degree so it is not triangle"<<endl;
   
   
    return 0;
}
