#include<iostream>
using namespace std;

int c1(int arr[],int n)
{
    if(n%2==0)
        return 0;
    else
        return 1;
}

int c2(int arr[],int n)
{
    int s=0;
    if(n%2!=0)
    {
        for(int i=0;i<n/2;i++)
        {
            if((arr[i]+1)==arr[i+1])
            {
                s++;
            }
        }
    }
    if(s==(n-1)/2)
        return 1;
    else
        return 0;
}

int c3(int arr[],int n)
{
    int s=0;
    if(n%2!=0)
    {
        for(int i=n/2;i<n;i++)
        {
            if((arr[i]-1)==arr[i+1])
            {
                s++;
            }
        }
    }
    if(s==(n-1)/2)
        return 1;
    else
        return 0;
}

int c4(int arr[],int n)
{
    if(arr[0]==1)
        return 1;
    else
        return 0;
}
int main()
{
    int n,testcase;
    cin>>testcase;
    while(testcase--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        c1(arr,n);
        c2(arr,n);
        c3(arr,n);
        c4(arr,n);

        if(c1(arr,n)==1 && c2(arr,n)==1 && c3(arr,n)==1 && c4(arr,n)==1)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}

