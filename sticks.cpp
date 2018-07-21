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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);
        int ans=-1;
        int p=1,cnt=0;
        for(int i=n-1;i>=0;i--)
        {
            if(cnt==2)
            {
                break;
            }

            if(a[i]==a[i-1])
            {
                p=p*a[i];
                i--;
                cnt++;
            }
        }

        if(cnt==2)
        {
            cout<<p<<endl;
        }
        else
            cout<<ans<<endl;
    }
    return 0;
}
