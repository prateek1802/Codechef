#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int occurance[26];
        string s;
        cin>>s;
        int x=s.length();
        for(int i=0;i<26;++i)
        {
            occurance[i]=0;
        }

        for(int i=0;i<x;++i)
        {
            occurance[s[i]-97]++;
        }
        int max_occurance=-1;
        for(int i=0;i<26;++i)
        {
            if(occurance[i]>=max_occurance)
            {
                max_occurance=occurance[i];
            }
        }
        int sum_occur=0;
        for(int i=0;i<26;++i)
        {
            sum_occur+=occurance[i];
        }
        sum_occur-=max_occurance;

        if(max_occurance==sum_occur)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
