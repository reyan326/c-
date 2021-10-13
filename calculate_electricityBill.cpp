/******************************************************************************
 Write a program to calculate and print the Electricity bill of a given customer.
 The customer id., name and unit consumed by the user should be taken 
 from the keyboard and display the total amount to pay to the customer. 
 The charge are as follow : Go to the editor

Unit	Charge/unit
upto 199	@1.20
200 and above but less than 400	@1.50
400 and above but less than 600	@1.80
600 and above	@2.00
If bill exceeds Rs. 400 then a surcharge of 15% will be charged and 
the minimum bill should be of Rs. 100/-
*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int id, unit;
   string name;
   float amount, netamount, surcharge, rate;
   cout<<"id: ",cin>>id;
   cout<<"name :";
    cin.ignore();
   getline(cin, name);
   
   cout<<"unit:",cin>>unit;
   cout<<endl<<endl;
   
   cout<<"Customer ID: "<<id<<endl;
   cout<<"Customer Name: "<<name<<endl;
   cout<<"Unit Consumed: "<<unit<<endl;
   
   if(unit<=199)
    {    rate = 1.20;
         amount = unit*rate;
         cout<<"Amount Charges @Rs. "<<rate<<" per unit: "<<amount<<endl;
    }
   else if(unit>=200 && unit<400)
    {    rate = 1.50;
        amount = unit*rate;
        cout<<"Amount Charges @Rs. "<<rate<<" per unit: "<<amount<<endl;
    }
   else if(unit>=400 && unit<600)
    {    rate = 1.80;
        amount = unit*rate;
        cout<<"Amount Charges @Rs. "<<rate<<" per unit: "<<amount<<endl;
    }
   else if(unit>=600)   
   {     
       rate = 2.00;
        amount = unit*rate;
        cout<<"Amount Charges @Rs. "<<rate<<" per unit: "<<amount<<endl;
   }    
  
   if(amount>400)
    {    surcharge = (15*amount)/100;
        netamount = amount + surcharge;
        cout<<"Surchage Amount: "<<surcharge<<endl;
        cout<<"Net Amount Paid By the Customer: "<<netamount<<endl;
    }
   else if(amount<100)
    {
        cout<<"Net amount: Rs100"<<endl;
    }   
   
   
   
    return 0;
}
