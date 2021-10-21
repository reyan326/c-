/******************************************************************************
Write a program in C++ to reverse a string.
*******************************************************************************/


#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{ 
  string input;
  cout<<"please type a string"<<endl;
  getline(cin, input);
  string s_new = "";
  for(int i = input.size()-1; i>=0; i--)
  {
     s_new += input[i]; 
  }
  cout<<s_new<<endl;
 
    return 0;
}


