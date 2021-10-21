/******************************************************************************
Write a program in C++ to create and display unique three-digit number using 
1, 2, 3, 4. Also count how many three-digit numbers are there. 
 (a) repetition are not allowed.
  (b) repetition are allowed

*******************************************************************************/

// (a) repetition are allowed
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int amount = 0;
   
   for(int i=1; i<=4; i++)
   {
       for(int j=1; j<=4; j++)
       {
           for(int k=1; k<=4; k++)
           {
               amount++;
                cout<<i<<j<<k<<" ";
                     
                  
                   
                  
           }
       }
   }
   cout<<endl<<endl;
    cout<<amount<<endl;
   
    return 0;
}

// (b) repetition are not allowed

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int amount = 0;
   
   for(int i=1; i<=4; i++)
   {
       for(int j=1; j<=4; j++)
       {
           for(int k=1; k<=4; k++)
           {
               amount++;
                cout<<i<<j<<k<<" ";
                     
                  
                   
                  
           }
       }
   }
   cout<<endl<<endl;
    cout<<amount<<endl;
   
    return 0;
}


