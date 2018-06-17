#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,q;
    scanf("%d%d",&n,&q);
    int a[n];
    int minn=INT_MAX;
    int maxx=INT_MIN;
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
        if(a[i]<minn)
        {
            minn=a[i];
        }
        if(a[i]>maxx)
        {
            maxx=a[i];
        }
    }

    while(q--)
    {
        int x;
        scanf("%d",&x);
        if(x>=minn&&x<=maxx)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
