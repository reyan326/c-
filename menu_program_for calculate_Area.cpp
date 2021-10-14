/******************************************************************************
Write a program  which is a Menu-Driven Program to compute the area of the 
various geometrical shape.

*******************************************************************************/
#include <iostream>
#include<cmath>

using namespace std;


int main()
{
    float area;
    int a;
    cout<<"Menu for Calculate Area\n"<<endl;
    cout<<" 1. Area of triangle\n 2. Area of Square\n 3. Area of rectangle\n 4. Area of Circle\n"<<endl;
    cout<<"Enter your option = ",cin>>a;
    
    switch(a)
    {
        case 1: float b, h; // b=  base of triangle , h= height of triangle
                cout<<"Enter base and height of triangle = ",cin>>b>>h;
                area = 0.5*b*h;
                cout<<"Area of Triangle is = "<<area<<endl;
                break;
                
        case 2: float s;   // side of square
                cout<<"Enter side of Square = ",cin>>s;
                area = s*s;
                cout<<"Area of Square = "<<area<<endl;
                break;
        case 3: float l, br;  // length and breatrh
                cout<<"Enter the length and breath of rectangle = ",cin>>l>>br;
                area = l*br;
                cout<<"Area of Rectangle = "<<area<<endl;
                break;
        case 4: float r; // radius of Circle
                cout<<"Enter the radius of circle = ",cin>>r;
                area = 3.14*r*r;
                cout<<"Area of Circle = "<<area<<endl;
                break;
        default: cout<<"Invalid input";        
          
   
    } 
     
     
    

    return 0;
}
