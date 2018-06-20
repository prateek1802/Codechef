#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,m;
    scanf("%lld%lld",&n,&m);
    long long int ans=0,median;

    median=1+(2*n);
    while(m--)
    {
        long long int x;
        scanf("%lld",&x);
        ans=n-abs(median-x);
        if(ans<0)
        {
            ans=0;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
