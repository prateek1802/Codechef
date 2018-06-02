#include<iostream>
#include<cstring>
#include<math.h>
#include<algorithm>
#include<sstream>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        string s;
        cin>>s;
        char a[26]={0};
        int len=s.length();
        for(int i=0;i<len;++i)
        {
            a[s[i]-'a']++;
        }
        int flag=0;
        for(int i=0;i<26;++i)
        {
            if(a[i]>=2)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}
