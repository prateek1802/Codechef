#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        long long int a[n];
        unsigned long long int p=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            p*=a[i];
        }
        long long int b[q];
        for(int i=0;i<q;i++)
        {
            cin>>b[i];
            cout<<b[i]/p<<" ";
        }
        cout<<endl;
    }
    return 0;
}
