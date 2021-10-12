/* Write a C program to check whether a given number is positive or negative.? */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int a;
   cout<<"Enter a number  = ",cin>>a;
   if(a>0)
   {
       cout<<a<<" is a positive number"<<endl;
   }
   else if(a==0)
   {
       cout<<a<<" is nor a positive neither negative number"<<endl;
   }
   else
   {
       cout<<a<<" is a negative number"<<endl;
   }
   

    return 0;
}
