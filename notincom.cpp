#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned int n,m,c=0;
        cin>>n>>m;
        unsigned int a[n],b[m];

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }

        for(int i=0;i<n;++i)
        {
            for(int j=0;j<m;++j)
            {
                if((a[i]^b[j])==0)
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
