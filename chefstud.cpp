#include<iostream>
#include<algorithm>
#include<string.h>
#include<cstring>
#define size 50
using namespace std;

int main()
{
    unsigned int n,t;
    cin>>t;
    while(t--)
    {
        char str[100000];
        int x=0;
        cin>>str;
        for(int i=0;i<strlen(str)-1;i++)
        {
            if(str[i]=='>')
                str[i]=='<';
            else if(str[i]=='<')
                str[i]=='>';
        }

        for(int i=0;i<strlen(str)-1;i++)
        {
            if(str[i]=='<'&&str[i+1]=='>')
                x++;
        }
        cout<<x<<endl;
    }
    return 0;
}


