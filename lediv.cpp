#include<bits/stdc++.h>
using namespace std;

int isPrime(int n)
{
    for(int i=2;i<=floor(sqrt(n));i++)
    {
        if(n%i==0)
            return i;
    }
    return n;
}

int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int result=a[0];
        for(int i=1;i<n;i++)
        {
            result=gcd(a[i],result);
        }

        if(result==1)
            cout<<"-1\n";
        else
            cout<<isPrime(result)<<endl;

    }
    return 0;
}
