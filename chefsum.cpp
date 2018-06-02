#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;++i)
        {
            cin>>arr[i];
        }
        int minimum=INT_MAX,index=0;
        for(int i=1;i<=n;++i)
        {
            if(arr[i]<minimum)
            {
                minimum=arr[i];
                index=i;
            }
        }
        cout<<index<<endl;
    }
    return 0;
}
