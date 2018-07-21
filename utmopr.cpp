#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long int a[n],s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }

        if(s%2==0&&k==1)
        {
            cout<<"odd\n";
        }
        else
            cout<<"even\n";
    }
    return 0;
}
