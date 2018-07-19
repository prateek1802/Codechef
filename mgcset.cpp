#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n],c=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%m==0)
            {
                c++;
            }
        }
        unsigned long long int ans=pow(2,c);
        ans--;
        cout<<ans<<endl;
    }
    return 0;
}
