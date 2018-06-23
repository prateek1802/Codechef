#include<bits/stdc++.h>
#include<algorithm>
#define M_PI
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[n],maxx=-1;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>maxx)
            {
                maxx=a[i];
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            c+=(maxx-a[i]);
        }
        m=m-c;
        if(m==0||m%n==0)
        {
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
