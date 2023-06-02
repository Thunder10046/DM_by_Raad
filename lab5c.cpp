#include<bits/stdc++.h>
#include <fstream>
using namespace std;

int partition(int arr[], int low, int high)
{

    int pivot = arr[high];
 
    
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {
 
        
        if (arr[j] < pivot) {
 
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
 
void quickSort(int arr[], int low, int high)
{
    if (low < high) {
 
        
        int pi = partition(arr, low, high);
 
    
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
   fstream file; 
   file.open("new_out.txt");
   int n = 50000;
   int arr1[n+5];
    for (int i = 0; i < n; i++)
    {
        file>>arr1[i];
    }
    file.close();

    clock_t start = clock();

    quickSort(arr1,0,n-1);
    
    clock_t end = clock();
    
    cout<<(float)(end-start)/CLOCKS_PER_SEC;
          
}