#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int x,y;
        cin>>x>>y;
        scanf("%ld%ld",&x,&y);
        long int gcd = __gcd(x,y);
        if(gcd==1)
        {
            printf("%ld\n",2);
        }
        else
            printf("%ld\n",2*gcd);
    }
    return 0;
}
