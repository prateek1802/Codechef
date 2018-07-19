#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int g;
        scanf("%d",&g);

        while(g--)
        {
            int j,n,q;
            scanf("%d%d%d",&j,&n,&q);
            if(n%2==0)
            {
                printf("%d\n",n/2);
            }
            else if(n%2!=0)
            {
                if(j==q)
                {
                    printf("%d\n",n/2);
                }
                else
                    printf("%d\n",(n/2)+1);
            }
        }
    }
    return 0;
}
