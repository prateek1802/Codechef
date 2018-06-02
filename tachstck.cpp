#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,d;
    cin>>n>>d;
    long long int a[n],c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    if(n==1)
        cout<<"0\n";
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]<=d)
            {
                c++;
                i++;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}
