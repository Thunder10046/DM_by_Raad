#include<bits/stdc++.h>
using namespace std;

int In(int a, int m) {
    int m0 = m;
    int y = 0, s = 1;

    if (m == 1)
        return 0;

    while (a > 1) {
        
        int q = a / m;
        int t = m;
        m = a % m;
        a = t;
        t = y;

        y = s - q * y;
        s = t;
    }
    if (s < 0)
        s += m0;

    return s;
}



int main()
{
    int n, M = 1;
    cout<<"Enter row number: "<<endl;
    cin>>n;
    int a[n], m[n], SumM[n];
    SumM[0]=1;
    cout<<"Enter a and m"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        cin>>m[i];
    }

    cout<<"The Congurence is: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<"x = "<<a[i]<<" (mod) "<<m[i]<<endl;
        M *= m[i];
    } 

    cout<<"M "<<M<<endl;

    for (int i = 0; i < n; i++)
    {
        SumM[i] = M/m[i];       
    }
        int y1 = In(SumM[0],m[0]);
        int y2 = In(SumM[1],m[1]);
        int y3 = In(SumM[2],m[2]);
    
    int X=a[0]*SumM[0]*y1+a[1]*SumM[1]*y2+a[2]*SumM[2]*y3;
    cout<<"The number is "<<X<<" Mod "<<M<< endl;

}

