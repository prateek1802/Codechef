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
        int a[n],b[100001]={0},c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]++;
        }

        for(int i=0;i<100001;i++)
        {
            if(b[i]>0)
                c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}
