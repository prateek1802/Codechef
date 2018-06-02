#include<iostream>
#include<cstring>
#include<math.h>
#include<algorithm>
using namespace std;

bool check(int a[],int b[],int x)
{
    for(int i=0;i<x;i++)
    {
        if(b[i]>a[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string a;
    cin>>a;
    int freqA[26]={0};
    int x=26;
    for(int i=0;i<a.length();i++)
    {
        freqA[a[i]-'a']++;
    }

    int t;
    cin>>t;
    while(t--)
    {
        string b;
        cin>>b;
        int freqB[26]={0};
        for(int i=0;i<b.length();i++)
        {
            freqB[b[i]-'a']++;
            if(freqB[b[i]-'a']>1)
            {
                freqB[b[i]-'a']=1;
            }
        }

        if(check(freqA,freqB,x))
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
