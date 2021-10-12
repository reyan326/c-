/*Write a C program to read the age of a candidate and determine whether it is eligible
  for casting his/her own vote*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int age;
   cout<<"How old are you? = ",cin>>age;
   if(age>18)
   {
       cout<<"Congratulation! You are eligible for casting your vote"<<endl;
   }
   else
   {
       cout<<"sorry,You are not eligible for casting your vote "<<endl;
   }
   

    return 0;
}
