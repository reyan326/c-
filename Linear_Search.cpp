/******************************************************************************
LINEAR SEARCH

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;


int main()
{
    int A[10], n=10, key;
    cout<<"enter numbers"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<"Enter key = ",cin>>key;
    for(int i=0; i<n; i++)
    {
        if(key==A[i])
        {
            cout<<"Found at = "<<i<<endl;
            return 0;
        }    
        
        
        
    }
    cout<<"Not Found";
    
    return 0;
}
