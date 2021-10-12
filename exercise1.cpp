/* Write a  program to read the value of an integer m and display the value of n is 1 
   when m is larger than 0, 0 when m is 0, and -1 when m is less than 0*/
   
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m, n;
    
    cout<<"Enter the vlaue of m = ",cin>>m;
    
    if(m>0)
    {
        n = 1;
        cout<<"The value of n = "<<n<<endl;
    }
    else if(m==0)
    {
        n = 0;
        cout<<"The value of n = "<<n<<endl;
    }
    else if(m<0)
    {
        n = -1;
        cout<<"The value of n = "<<n<<endl;
    }
 
    
    return 0;
}
