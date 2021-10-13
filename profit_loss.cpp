/******************************************************************************
Write a  program to calculate profit and loss on a transaction.
*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float sprice, cprice;
    cout<<"Enter selling price = ",cin>>sprice;
    cout<<"Enter cost price = ",cin>>cprice;
    
    if(sprice > cprice)
    {
        int profit;
        profit = sprice - cprice;
        
        cout<<"You can booked your profit amount: "<<profit<<endl;
        
    }
    else if(cprice>sprice)
    {
        int loss;
        loss = cprice - sprice;
        
        cout<<"you have loss of: "<<loss<<endl;
    }
    else
    {
        cout<<"you got your investment"<<endl;
        
    }
    
    return 0;
}
