#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    unsigned int t;
    cin>>t;
    while(t--)
    {
        unsigned int n;
        cin>>n;
        unsigned int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>*(arr+i);
        }
        sort(arr,arr+n);
        cout<<arr[0]+arr[1]<<endl;
    }
    return 0;
}

