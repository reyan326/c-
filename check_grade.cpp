/******************************************************************************
Write a program to accept a grade and declare the equivalent description 

Grade	Description
E	Excellent
V	Very Good
G	Good
A	Average
F	Fail


*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;


int main()
{
   char ch;
   cout<<"Enter your grade in capital letter = ",cin>>ch;
   
   switch(ch)
   {
        case 'E': cout<<"Excellent";
            break;
        case 'V': cout<<"Very Good";
                break;
        case 'G': cout<<"Good";
                break;
        case  'A': cout<<"Average";
                break;
        case 'F': cout<<"Fail";
                break;
        default : cout<<"Invalid input";
                break;
            
   }

    return 0;
}
