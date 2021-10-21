/******************************************************************************
Write a program in C++ to count the letters, spaces, numbers and other 
characters of an input string.
*******************************************************************************/


#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{ 
  int alp=0, number=0, spcl=0, witspace=0;
  
  
  string input;
  cout<<"Please type a string"<<endl;
  getline(cin, input);
  cout<<endl<<endl;
 int numofchar = input.length();
  
  for(unsigned int i=0; i<input.length(); i++)
  {
    char c1 = input.at(i);
    
    if(isalpha(c1))
    {
        alp++;
    }
    else if(isdigit(c1))
    {
        number++;
    }
    else if(isspace(c1))
    {
        witspace++;
        numofchar--;
    }
    else 
    {
        spcl++;
    }
    
      
  }
    cout<<"Number of characters = "<<numofchar<<endl;
    cout<<"Number of characters with whitespace = "<<input.length()<<endl;
    cout<<"The number of alphabet are  = "<<alp<<endl;
    cout<<"The number of digit are = "<<number<<endl;
    cout<<"The number of whitespace are = "<<witspace<<endl;
    cout<<"The special character are = "<<spcl<<endl;
  
    return 0;
}


