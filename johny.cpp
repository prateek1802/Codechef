#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;

int main()
{
    unsigned int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        unsigned int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        int x=arr[k-1];
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(x==arr[i])
            cout<<i+1<<endl;
        }
    }
    return 0;
}

