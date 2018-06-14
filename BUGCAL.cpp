#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long int a,b;
        cin>>a>>b;
        if(b>a)
        {
            swap(a,b);
        }
        vector<unsigned long int> v1;
        vector<unsigned long int> v2;

        while(a>0)
        {
            v1.push_back(a%10);
            a=a/10;
        }
        while(b>0)
        {
            v2.push_back(b%10);
            b=b/10;
        }

        while(v1.size()<v2.size())
        {
            v1.push_back(0);
        }

        while(v2.size()<v1.size())
        {
            v2.push_back(0);
        }

        int x=v1.size();

        vector<unsigned long int> p;
        for(int i=0;i<x;i++)
        {
            int a=v1[i]+v2[i];
            a=a%10;
            p.push_back(a);
        }
        long int ans=0;
        reverse(p.begin(),p.end());
        vector<unsigned long int>::iterator it;
        for(it=p.begin();it!=p.end();it++)
        {
            ans=ans*10+(*it)%10;
        }

        cout<<ans<<endl;

    }
    return 0;
}
