#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int x1=s1.length();
        int x2=s2.length();
        int mMin=0,mMax=0;
        for(int i=0;i<x1;i++)
        {
            if(s1[i]=='?'||s2[i]=='?')
            {
                mMin++;
            }

            if(s1[i]=='?'||s2[i]=='?'||(s1[i]!=s2[i]))
            {
                mMax++;
            }
        }
        cout<<mMax-mMin<<" "<<mMax<<endl;
    }
    return 0;
}
