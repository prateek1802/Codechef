#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }

        sort(a,a+n);
        cout<<s-(n*a[0])<<endl;
    }
    return 0;
}
