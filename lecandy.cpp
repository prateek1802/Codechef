#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;

bool sum(int arr[],int n,int c)
{
    int sum=0;
    for(int i=0;i<n;++i)
    {
        sum+=arr[i];
    }

    if(sum>c)
    {
        return false;
    }
    else
        return true;
}

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n,c;
        cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }

        if(sum(arr,n,c))
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
