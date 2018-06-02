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
        int len=s.length();
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int a[26]={0};
        int cnt=0,flag=0;

        for(int i=0;i<len;i++)
        {
            a[s[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(a[i]>0)
            {
                cnt++;
            }
        }

        if(cnt!=2)
        {
            cout<<"NO\n";
        }
        else if(cnt==2)
        {
            for(int i=0;i<len-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    flag=1;
                    break;
                }
            }

            if(flag==1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }
    return 0;
}
