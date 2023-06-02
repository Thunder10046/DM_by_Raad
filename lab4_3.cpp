#include<bits/stdc++.h>
using namespace std; 

int main()
{
    vector<int>a,b; 
    int sa, sb; 

    cout<<"Enter the inputs for set a: "<<endl;
    for (int i = 0; i < sa; i++)
    {
        cin>>a[i];
    }

    cout<<"Enter the inputs for set b: "<<endl;
    for (int i = 0; i < sb; i++)
    {
        cin>>b[i];
    }
    
    int flag1=1;
    int flag2=1;
    int flag3=1;

    for (int i = 0; i < sa; i++)
    {
        if(find(b.begin(),b.end(), a[i]*a[i])==b.end() && flag1==1)
        {
            flag1 =0; 
        }

        if(find(b.begin(),b.end(), a[i]*a[i])==b.end() && flag1==1)
        {
            flag2 =0; 
        }

        if(find(b.begin(),b.end(), a[i]*a[i])==b.end() && flag1==1)
        {
            flag2 =0; 
        }
    }

    if (flag1==1)
    {
        cout<<"i) f(x) is onto"<<endl;
    }
    else{
        cout<<"i) f(x) is not onto"<<endl;
    }
    
    if (flag2==1)
    {
        cout<<"ii) f(x) is onto"<<endl;
    }
    else{
        cout<<"ii) f(x) is not onto"<<endl;
    }

    if (flag1==3)
    {
        cout<<"iii) f(x) is onto"<<endl;
    }
    else{
        cout<<"iii) f(x) is not onto"<<endl;
    }
     
}