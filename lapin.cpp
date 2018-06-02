#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length(),flag=0;
        int x=26;
        int a1[26]={0};
        int a2[26]={0};

        if(l%2!=0)
        {
            for(int i=0;i<l/2;i++)
            {
                a1[s[i]-'a']++;
            }

            for(int i=(l/2)+1;i<l;i++)
            {
                a2[s[i]-'a']++;
            }

            for(int i=0;i<x;i++)
            {
                if(a1[i]!=a2[i])
                {
                    flag=1;
                    break;
                }
                else
                    continue;
            }
        }

        else
        {
            for(int i=0;i<l/2;i++)
            {
                a1[s[i]-'a']++;
            }

            for(int i=(l/2);i<l;i++)
            {
                a2[s[i]-'a']++;
            }

            for(int i=0;i<x;i++)
            {
                if(a1[i]!=a2[i])
                {
                    flag=1;
                    break;
                }
                else
                    continue;
            }
        }

        if(flag==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}
