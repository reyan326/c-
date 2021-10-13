/******************************************************************************
Write a C program to check whether a character is an alphabet, digit or special character
*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  char ch;
  cout<<"Enter any character = ",cin>>ch;
 
  if((ch>= 'a' && ch<='z') || (ch>='A' && ch<='Z'))
    cout<<"This is alphabet"<<endl;
  else if(ch>=0 && ch<=9)
    cout<<"This is numeric"<<endl;
  else
    cout<<"This is special character"<<endl;
   
   
    return 0;
}
