#include<iostream>
#include<algorithm>
#include<cstring>
#include<climits>
#include<math.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int x=arr[0];

        for(int i=1;i<n;i++)
        {
            x=gcd(x,arr[i]);
        }
        cout<<x<<endl;
    }
    return 0;
}
