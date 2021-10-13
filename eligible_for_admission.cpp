/******************************************************************************
 Write a  program to find the eligibility of admission for a professional course
 based on the following criteria: Go to the editor
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 
and Marks in Chem>=50 and Total in all three subject >=190 or 
Total in Maths and Physics >=140 

*******************************************************************************/
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    
    float maths, phy, chem;
    float marks, Total, AllTotal;
    
    cout<<"Enter marks."<<endl;
    cout<<"maths marks = ",cin>>maths;
    cout<<"Physics marks = ",cin>>phy;
    cout<<"chemistry marks = ",cin>>chem;
    
    AllTotal = (maths + phy + chem);
    Total = (maths + phy);
    
    //cout<<"AllTotal = "<<AllTotal<<endl;
    //cout<<"Total = "<<AllTotal<<endl;
    
    if(maths>=65 && phy>=55 && chem>=50)
    {
        cout<<"The candidate is eligible for admission";
    }
    
    else if(AllTotal>= 190 || Total>= 140)
    {
        cout<<"The candidate is eligible for admission";
    }
    
    else
    {
        cout<<"The candidate is not eligible for admission";
    }
    
    
    

    return 0;
}
