#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int n ;
    cout<<"Enter integer: "<<endl;
    cin>>n;
    while (true)
    {
        cout<<n<<endl;
        if (n==1)
        {
            break;
        }
        else if (n%2==0)
        {
            n = n/2; 
        }
        else
        {
            n = (3*n)+1;
        }
        
    }
    
}