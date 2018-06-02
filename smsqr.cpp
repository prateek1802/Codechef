#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        long long int mod=pow(10,9)+7,sum=0;
        cin>>x>>y;
        long long int k=y-x;
        long long int m,n,o,p;
        m=4*x*k*(x-1);
        n=4*x*k*(k+1);
        o=(4*k*(k+1)*(k-1))/3;
        sum=m+n+o+k;
        cout<<sum%mod<<endl;
    }
    return 0;
}
