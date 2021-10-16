/******************************************************************************
Adding all element in array

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A[7] = {4, 8, 6, 9, 5, 2, 7};
    int n = 7, sum = 0;
    
    for(int i=0; i<7; i++)
    {
        sum += A[i];
    }
    
    cout<<"sum = "<<sum;

    
    
    return 0;
}
