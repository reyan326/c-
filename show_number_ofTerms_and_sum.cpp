/******************************************************************************
 Write a program in C++ to display n terms of natural number and their sum. 

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int i, sum =0, n;
   cout<<"enter the number of terms = ",cin>>n;
   
   for(i = 1; i<=n; i++)
   {
       cout<<i<<" ";
       sum += i;
       
   }
  cout<<"sum of first Natural Numbers = "<<sum<<endl;
   
    return 0;
}
