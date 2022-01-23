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
  /* check whether any element in left side has value equal to current element value, if equal dont increment count, else increment count*/
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==0)
        {
            unique++;
        }
        count = 0;
    }
    cout << "No. of distinct elements = "<<unique<<endl;
}
