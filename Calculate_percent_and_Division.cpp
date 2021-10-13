/******************************************************************************
Write a C program to read roll no, name and marks of three subjects and calculate 
the total, percentage and division.

*******************************************************************************/
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
   int rollno, Total = 300;
   string name;
   float maths, phy, chem, obtain, percentage;
   
   cout<<"Enter Roll No of students = ",cin>>rollno;
   cout<<"Enrter name of students = ";
   cin.ignore();
   getline(cin, name);    
   cout<<"Input the marks of Physics, Chemistry and Computer Application : ",cin>>maths>>phy>>chem;
   cout<<endl;
   obtain = maths + phy + chem;
   percentage = (obtain/Total)*100;
   
   cout<<"Roll No = "<<rollno<<endl;
   cout<<"Marks in maths = "<<maths<<endl;
   cout<<"Marks in physics = "<<phy<<endl;
   cout<<"Marks in chemistry = "<<chem<<endl;
   cout<<"Total marks = "<<obtain<<endl;
   cout<<"percentage = "<<percentage<<endl;
   
   if(percentage>=60.0)
    {
        cout<<"Division = First";
    }
   else if(percentage>=48 && percentage<60)
   {
       cout<<"Division = Second";
   }
   else if(percentage>=33 && percentage<48)
   {
       cout<<"Division = Third";
   }
   else
   {
       cout<<"Fail";
   }
   
    return 0;
}
