#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int a[128]={0};
        int b[128]={0};
        int x=128,l1=s1.length(),l2=s2.length();
        for(int i=0;i<l1;i++)
        {
            a[s1[i]-'\0']++;
        }
        for(int i=0;i<l2;i++)
        {
            b[s2[i]-'\0']++;
        }
        int c=0;
        bool k[128]={false};
        for(int i=0;i<l2;i++)
        {
            if(b[s2[i]-'\0']>0&&a[s2[i]-'\0']>0&&!k[s2[i]-'\0'])
            {
                c+=b[s2[i]-'\0'];
                k[s2[i]-'\0']=true;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
