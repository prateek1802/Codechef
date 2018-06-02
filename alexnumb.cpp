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
        unsigned long int n,k;
        cin>>n;
        unsigned long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        unsigned long int x=arr[k-1];
        sort(arr,arr+n);

        for(int i=0;i<n;i++)
        {
            if(x==arr[i])
            {
                cout<<i+1<<endl;
            }
        }
    }
    return 0;
}
