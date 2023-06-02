#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int checkA[100000] = {0};
int checkB[100000] = {0};
int inter[100000] = {0};

vector<int> Unionar;
vector<int> intersectionar;

void printVec(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void unionfn(vector<int> A, vector<int> B)
{

    for (int i = 0; i < A.size(); i++)
    {
        Unionar.push_back(A[i]);
    }
    for (int i = 0; i < B.size(); i++)
    {
        if (checkA[B[i]] == 0)
        {

            Unionar.push_back(B[i]);
        }
    }

    sort(Unionar.begin(), Unionar.end());
    cout << "A U B : \n";
    printVec(Unionar);
}

void intersectionfn(vector<int> A, vector<int> B)
{

    for (int i = 0; i < A.size(); i++)
    {
        if (checkB[A[i]] == 1)
        {
            inter[A[i]] = 1;
            intersectionar.push_back(A[i]);
        }
    }

    sort(intersectionar.begin(), intersectionar.end());
    cout << "A intersection B:" << endl;
    printVec(intersectionar);
}

void diffAB(vector<int> a, vector<int> b)
{
    vector<int> ab;
    for (int i = 0; i < a.size(); i++)
    {
        if (checkB[a[i]] == 0)
            ab.push_back(a[i]);
    }
    sort(ab.begin(), ab.end());
    cout << "Here is A-B\n";
    printVec(ab);
}

int main()
{
    cout << "Enter the element number of set A \n";
    int n;
    cin >> n;
    cout << "Enter the elements\n";
    vector<int> setA;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        if (checkA[d] == 0)
            setA.push_back(d);
        checkA[d] = 1;
    }
    cout << "Enter the element number of set B \n";
    // int n;
    cin >> n;
    cout << "Enter the elements\n";
    vector<int> setB;
    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        if (checkB[d] == 0)
            setB.push_back(d);
        checkB[d] = 1;
    }
    unionfn(setA, setB);
    intersectionfn(setA, setB);
    diffAB(setA, setB);
    cout<<"Size of A :"<<setA.size()<<endl;
    cout<<"Size of B :"<<setB.size()<<endl;
}