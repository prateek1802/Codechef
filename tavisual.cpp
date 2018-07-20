#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,q;
        cin>>n>>c>>q;
        while(q--)
        {
            int bI,bF;
            cin>>bI>>bF;
            if(c>=bI&&c<=bF)
            {
                int x=c-bI;
                int y=bF-x;
                c=y;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
