/******************************************************************************
Write a  program to check whether a triangle is Equilateral, Isosceles or Scalene

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;    // a, b, c is the side of triangle
    
    cout<<"Enter the sides of  triangle a, b, c = ",cin>>a>>b>>c;
    
    if(a==b && b==c)
        cout<<"This is Equilateral trianle"<<endl;
    else if(a==b || b==c || c==a)  
        cout<<"This is Isosceles trianle"<<endl;
    else 
        cout<<"This is Scalene trianle"<<endl;
    

    return 0;
}
