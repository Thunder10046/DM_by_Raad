#include<bits/stdc++.h>
using namespace std ;

int main(){

    string s;
    cin>>s;
    int n = s.size();
    // assigning the size of the array
    int i; 

    for ( i = n-2; i>=0; i--)
    {
        if (s[i]<s[i+1])
        {
            break;
        }
        // comparing if the next element is greater than the previous one
        
    }

    int k = i;
    int p; 

    for (int i = n-1; i>=(k+1); i--)
    {
        if (s[i]>s[k])
        {
            p=i;
        }
        // finding the index
        
    }
    swap(s[k],s[p]); //swaping 
    sort(s.begin()+k+1,s.end());
    cout<<s<<endl;
    
    

}