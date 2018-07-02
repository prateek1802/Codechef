#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c=0;
        int l,m;
        scanf("%d%d",&l,&m);

        for(int i=l;i<=m;i++)
        {
            int x=i%10;
            if(x==2||x==3||x==9)
            {
                c++;
            }
        }

        printf("%d\n",c);
    }
    return 0;
}
