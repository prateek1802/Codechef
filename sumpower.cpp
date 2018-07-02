#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        string s;
        cin>>s;
        int l=s.length();

        int cost=0;

        for(int i=0;i<n-k;i++)
        {
            string s1=s.substr(i,k);
            string s2=s.substr(i+1,k);

            for(int i=0;i<k;i++)
            {
                if(s1[i]!=s2[i])
                {
                    cost++;
                }
            }
        }

        printf("%d\n",cost);
    }
    return 0;
}
