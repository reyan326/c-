/******************************************************************************
Write a program in C to read any day number in integer and display day name in the word

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

 

int main()
{
   int d;
   cout<<"Enter day number = ",cin>>d;
   
   switch(d)
   {
        case 1: cout<<"sunday";
            break;
        case 2: cout<<"monday";
                break;
        case 3: cout<<"tuesday";
                break;
        case  4: cout<<"wednesday";
                break;
        case 5: cout<<"thusday";
                break;
        case 6: cout<<"friday";
                break;
        case 7: cout<<"saturday";
                break;
                
        default : cout<<"Invalid input";
                break;
            
   }

    return 0;
}
