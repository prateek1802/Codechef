#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    unsigned int t;
    cin>>t;

    while(t--)
    {
        int arr[100000];
        unsigned int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            arr[i]=1;
        }

        for(int i=0;i<n-1;i++)
        {
            arr[i+1]=2+arr[i];
        }

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

