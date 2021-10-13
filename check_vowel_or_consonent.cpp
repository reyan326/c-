/******************************************************************************
Write a  program to check whether an alphabet is a vowel or consonant.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   char ch;     // ch represent alphabet
   cout<<"Enter alphabet letter = ",cin>>ch;
   
   if((ch=='a' || ch=='i' || ch=='e' || ch=='o' || ch=='u') || (ch=='A' || ch=='I' || ch=='E' || ch=='O' || ch=='U'))
   {
       cout<<"This is vowel letter"<<endl;
   }
   else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
   {
       cout<<"This is consonent letter"<<endl;
   }
   else
   {
       cout<<"This is not alphabet letter"<<endl;
   }
   
    return 0;
}
