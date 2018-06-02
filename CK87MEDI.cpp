#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];

        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }

        sort(arr,arr+n);
        cout<<arr[(n+k)/2]<<endl;
    }
    return 0;
}
