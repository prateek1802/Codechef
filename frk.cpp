#include<bits/stdc++.h>
using namespace std;
int c=0;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.length();
        string st[100]={"ch","he","ef","che","hef","chef"};
        int stLen=6;

        for(int i=0;i<stLen;i++)
        {
            if(s.find(st[i])!=string::npos)
            {
                c++;
                break;
            }
        }
    }
    cout<<c;
    return 0;
}
