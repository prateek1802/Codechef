#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

unsigned int gcd(int a,int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main()
{
    unsigned int t;
    cin>>t;
    char a[100000];
    while(t--)
    {
        unsigned int n;
        cin>>n;
        unsigned int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int result=arr[0];
        for(int i=0;i<n;i++)
        {
            result=gcd(arr[i],result);
        }

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]/result<<" ";
        }

        cout<<endl;
    }
    return 0;
}
