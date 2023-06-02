#include<bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
   fstream file; 
   file.open("new_out.txt");
   int n = 80000;
   int arr1[n+5];
    for (int i = 0; i < n; i++)
    {
        file>>arr1[i];
    }
    file.close();

    clock_t start = clock();

    int i,j,t; 
    for(i=0;i<n-1;i++) 
    {
        for(j=0;j<=n-2-i;j++) 
        if(arr1[j]>arr1[j+1]) 
        { 
         t=arr1[j];arr1[j]=arr1[j+1];arr1[j+1]=t; 
        }
    } 

    clock_t end = clock();
    
    cout<<(float)(end-start)/CLOCKS_PER_SEC;
          
}