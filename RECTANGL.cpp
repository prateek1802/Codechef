#include<iostream>
#include<algorithm>
using namespace std;

bool rect(int a[],int n)
{
    if(a[0]==a[1]&&a[2]==a[3])
        return true;
    else if(a[0]==a[1]&&a[0]==a[1]&&a[0]==a[2]&&a[1]==a[2]&&a[1]==a[3]&&a[3]==a[2])
        return true;
    else
        return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[4];
        int n=4;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(rect(arr,n))
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
