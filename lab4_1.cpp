#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int upper, lower, d, a,n, sum1=0, sum2=0; 
    cout<<"Enter Lower Limit: "<<endl;
    cin>>lower;
    cout<<"Enter Upper Limit: "<<endl;
    cin>>upper; 
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter d: "<<endl;
    cin>>d; 

    sum1 = (upper-lower+1)*a + ((upper*(upper+1))/2 - (lower)*(lower-1)/2)*d;  

    cout<<"Sum of a+nd ="<<sum1<<endl;
}