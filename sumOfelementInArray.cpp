#include<iostream>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    int unique=0;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin >> *(arr+i);
    }
    for(int i=0;i<n;i++)
    {
        count = count + arr[i];
    }
    cout <<"sum of elements in your array is "<<count<<endl;
}
