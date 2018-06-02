#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n;
    cin>>n;
    unsigned long long int a[n],x=0,s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }

    x=(n*(n+1))/2;
    //cout<<s<<" "<<x;
    if(s==x)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
