#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int l1=s1.length();
        int l2=s2.length();
        int a[26]={0},b[26]={0};
        int x=26;

        for(int i=0;i<l1;i++)
        {
            a[s1[i]-'a']++;
        }

        for(int i=0;i<l2;i++)
        {
            b[s2[i]-'a']++;
        }
        int zero=0;
        for(int i=0;i<x;i++)
        {
            if(a[i]>0&&b[i]>0)
            {
                zero=1;
                break;
            }
        }

        if(zero)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }

    }
    return 0;
}
