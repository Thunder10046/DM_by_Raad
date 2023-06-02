#include <bits/stdc++.h>
using namespace std;

bool first(int arr1[], int arr2[], int n)
{
    bool count;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((arr1[i] * arr1[i]) - arr2[j]) >= 3)
            {
                count = false;
                return count;
                break;
            }
        }
    }
    return true;
}

bool second(int arr1[], int arr2[], int n)
{
    bool count;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((arr1[i] * arr1[i]) - arr2[j]) < 3)
            {
                count = true;
                
                break;
            }
            else count = false;
        }
    }
    return count;
}

bool third(int arr1[], int arr2[], int n)
{
    bool count;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((arr1[i] * arr1[i]) - arr2[j]) >= 3)
            {
                count = true;
                return count;
            }
        }
    }
    return false;
}

bool fourth(int arr1[], int arr2[], int n)
{
    bool count;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (((arr1[i] * arr1[i]) - arr2[j]) < 3)
            {
                count = true;
                return count;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter array size: " << endl;
    cin >> n;
    int arr1[n], arr2[n];
    cout << "Enter array numbers for x: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter array numbers for y: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    cout << "i)For all x all y: " << endl;
    if (first(arr1, arr2, n) == true)
    {
        cout << "T" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

    cout << "ii)For all x any y: " << endl;
    if (second(arr1, arr2, n) == true)
    {
        cout << "T" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

    cout << "iii)For any x all y: " << endl;
    if (third(arr1, arr2, n) == true)
    {
        cout << "T" << endl;
    }
    else
    {
        cout << "F" << endl;
    }

    cout << "iv)For any x any y: " << endl;
    if (third(arr1, arr2, n) == true)
    {
        cout << "T" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
}