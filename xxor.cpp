#include<iostream>
#include<algorithm>
#include<climits>
#include<math.h>
#include<vector>
#include<iomanip>
#include<bitset>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    while(q--)
    {
        int l,r;
        cin>>l>>r;
        string s[n+1];
        int b[32]={0},y=0;
        for(int i=1;i<=n;i++)
        {
            s[i]=bitset<32>(a[i]).to_string();
        }
        
        for(int i=1;i<=32;i++)
        {
            int one=0,zero=0;
            for(int j=l;j<=r;j++)
            {
                int z=s[j][i]-'0';
                if(z==1)
                {
                    one++;
                }
                else
                    zero++;
            }
            if(zero>one)
            {
                b[y++]=1;
            }
            else
                b[y++]=0;
        }

        int ans=0;
        for(int i=y-2;i>=0;i--)
        {
            if(b[i]==1)
            {
                ans+=pow(2,30-i);
            }
            else
                continue;
        }
        cout<<ans<<endl;
    }
    return 0;
}
