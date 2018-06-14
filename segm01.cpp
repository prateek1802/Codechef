#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length();
        vector<int> v;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='1')
            {
                v.push_back(i);
            }
        }
        int flag=1;
        for(int i=0;i<v.size()-1&&v.size()>0;i++)
        {
            if(v[i+1]-v[i]!=1)
            {
                flag=0;
                break;
            }
        }
        if(flag&&v.size()>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
