#include<iostream>
using namespace std;

bool sorted(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++)
    {
        cin >> a[i] ; 
    }
    if(sorted(a,n))
    {
        cout << "Sorted \n";
    }
    else
    {
        cout << "Not Sorted \n";
    }
    return 0;
}
