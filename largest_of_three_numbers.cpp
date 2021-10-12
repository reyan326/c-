/* Write a C++ program to find the largest of three numbers*/
   
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter 1st Number = ",cin>>a;
    cout<<"Enter 2nd Number = ",cin>>b;
    cout<<"Enter 3rd Number = ",cin>>c;
    if(a == b && a == c)
    {
        cout<<"1st Number = "<<a<<endl;
        cout<<"2nd Number = "<<b<<endl;
        cout<<"3rd Number = "<<c<<endl;
            
        cout<<"All three Number is equal to each other."<<endl;
    }
    else if(a == b && a>c)
    {
        cout<<"1st Number = "<<a<<endl;
        cout<<"2nd Number = "<<b<<endl;
        cout<<"3rd Number = "<<c<<endl;
            
        cout<<"The 1st and 2nd number is equal and greatest among three numbers ."<<endl;
    }
    else if(a == b && c>a)
    {
        cout<<"1st Number = "<<a<<endl;
        cout<<"2nd Number = "<<b<<endl;
        cout<<"3rd Number = "<<c<<endl;
            
        cout<<"The 3rd Number is the greatest among three"<<endl;
    }
    else if(a==c && a>b)
    {
        cout<<"1st Number = "<<a<<endl;
        cout<<"2nd Number = "<<b<<endl;
        cout<<"3rd Number = "<<c<<endl;
            
        cout<<"The 1st and 3rd number is equal and greatest among three numbers ."<<endl;  
    }
    else if(a==c && b>a)
    {
        cout<<"1st Number = "<<a<<endl;
        cout<<"2nd Number = "<<b<<endl;
        cout<<"3rd Number = "<<c<<endl;
            
        cout<<"The 2nd Number is the greatest among three"<<endl;   
    }
   else if(b==c && b>a)
   {
        cout<<"1st Number = "<<a<<endl;
        cout<<"2nd Number = "<<b<<endl;
        cout<<"3rd Number = "<<c<<endl;
            
        cout<<"The 2nd and 3rd number is equal and greatest among three numbers ."<<endl;   
   }
   else if(b==c && a>b)
   {
        cout<<"1st Number = "<<a<<endl;
        cout<<"2nd Number = "<<b<<endl;
        cout<<"3rd Number = "<<c<<endl;
            
        cout<<"The 1st Number is the greatest among three"<<endl;   
   }
   
   
   
    else
    {
        if(a>b && a>c)
        {    cout<<"1st Number = "<<a<<endl;
            cout<<"2nd Number = "<<b<<endl;
            cout<<"3rd Number = "<<c<<endl;
            
            cout<<"The 1st Number is the greatest among three"<<endl; 
        }
        else if(b>c)
        {
           cout<<"1st Number = "<<a<<endl;
            cout<<"2nd Number = "<<b<<endl;
            cout<<"3rd Number = "<<c<<endl;
            
            cout<<"The 2nd Number is the greatest among three"<<endl; 
       
        }
        else
        {
            cout<<"1st Number = "<<a<<endl;
            cout<<"2nd Number = "<<b<<endl;
            cout<<"3rd Number = "<<c<<endl;
            
            cout<<"The 3rd Number is the greatest among three"<<endl; 
        
        }
   
   
   
    }
    
    
    return 0;
}
