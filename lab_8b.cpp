#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of set : "<<endl;
    cin >> n;

    set<int> s;
    cout << "Enter elements of set : "<<endl;
    
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        s.insert(num);
    }

    //insertion of set
    
    vector<int> arr;

    for (auto x : s)
    {
        arr.push_back(x);
    }
    
    //inserting the set in a vector (vector-1) 

    sort(arr.begin(), arr.end());
    vector<int> arr2;
    
    int n2;
    cout << "Enter size of the next set : "<<endl;
    cin >> n2;
    cout << "Enter elements"<<endl;
    
    for (int i = 0; i < n2; i++)
    {
        int num;
        cin >> num;
        arr2.push_back(num);
    }

    //inserting the next inputed set in a vector (vector-2)

    int index;
    int i, j;
    
    for (i = n2 - 1, j = 1; i >= 0; i--, j++)
    {
        if (arr2[i] == arr[n - j])
        {
            continue;
        }
        else
        {
            break;
        }
    }
    // comparing vector 1 to vector 2 

    int index_required = n2 - i;

    //finding the index from where the right ones would change  

    int index;
    for (int k = 0; k < n; k++)
    {
        if (arr[k] == arr2[i])
        {
            index = k + 1;
            break;
        }
        //finding in array 1, where the indexed number is quall to the array1, then added 1 and assigning in into a new integer so that it can print it later sequentially 
    }

    for (int k = 0; k < i; k++)
    {
        cout << arr2[k];
    }
    // till the indexed element, print

    for (int k = index, l = 0; l < index_required; k++, l++)
        cout << arr[k];
    cout << endl;
    //with the index previously acheived or assigned in 76th line, to print the rest of the elements of arr1 
    
}