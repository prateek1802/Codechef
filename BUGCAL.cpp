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
        string s1,s2;
        cin>>s1,s2;

        int x=s1.length();
        int y=s2.length();

        if(y>x)
        {
            swap(x,y);
        }

        int nX=s1.length();
        int nY=s2.length();

        for(int i=0;i<nY;i++)
        {
            int a=s1[i]-'0';
            int b=s2[i]-'0';
            a=a+b;
            cout<<a%10;
        }

        for(int i=nY;i<nX;i++)
        {
            cout<<s1[i]-'0';
        }
        cout<<endl;
    }
    return 0;
}
