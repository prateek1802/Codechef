#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        long int sum=0;
        sort(a,a+n);
        for(int i=n-1;i>=0;i-=2)
        {
            sum+=a[i];
        }
        printf("%ld\n",sum);
    }
    return 0;
}
