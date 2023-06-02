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

    int r; 
    cout<<"Enter r: "<<endl;
    cin>>r; 

    sum2 = ((a*(pow(r,upper)-pow(r,lower)))/(r-1)); 

    cout<<sum2<<endl;
}