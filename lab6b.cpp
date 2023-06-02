#include<bits/stdc++.h>
using namespace std; 


map<int,int> primefactor(int n)
{
    map<int, int>mappe;
    int key = 0; 
    while (n%2==0)
    {
        cout<<"2 "; 
        n = n/2;
        mappe[2]++;
        mappe.insert({key,2});
    }

    for (int i = 3; i <= sqrt(n); i=i+2)
    {
        while (n%i==0)
        {
            cout<<i<<" ";
            n = n/i;
            mappe[i]++;
        }
        
    }

    if (n>2)
    {
        cout<<n<<" ";
        mappe.insert({key,n});

    }

    return mappe;
    
}

map<int,int> compare(map<int, int>map1, map<int, int>map2)
{
    for (auto i = map1.begin(); i!=map1.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    
}


int main()
{
    int n,m;
    map<int,int>map1, map2;
    int size1, size2;
    cout<<"Enter first number for prime factors: "<<endl;
    cin>>n;
    map1 = primefactor(n);    
    cout<<"Enter second number for prime factors: "<<endl;
    cin>>m;
    map2 = primefactor(m);

    size1 = map1.size();
    size2 = map2.size();

    compare(map1, map2);
}