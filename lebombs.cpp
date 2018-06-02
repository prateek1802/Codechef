#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[i]=0;
        }

        if(arr[0]=='1')
        {
            a[1]=1;
            a[0]=1;
        }

        if(arr[n-1]=='1')
        {
            a[n-2]=1;
            a[n-1]=1;
        }

        for(int i=1;i<n-1;i++)
        {
            if(arr[i]=='1')
            {
                a[i+1]=1;
                a[i-1]=1;
                a[i]=1;
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
}
