#include<iostream>
#include<cstring>
#include<math.h>
#include<iomanip>
#include<algorithm>
using namespace std;

long long int total(string s,int n)
{
    string x="cefh",m="";
    long long int total=0;
    
    for(int i=0;i<n-3;i++)
    {
        m=s.substr(i,4);
        sort(m.begin(),m.end());
        if(m==x)
        {
            total++;
        }
    }

    return total;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        
        cin>>s;
        int len=s.length();
        int x=26;
        int a[x]={0};

        for(int i=0;i<len;i++)
        {
            a[s[i]-'a']++;
        }
        int t=total(s,len);

        if(t==0||len<4)
        {
            cout<<"normal"<<endl;
        }

        else if(a[2]>0&&a[4]>0&&a[5]>0&&a[7]>0&&t>0)
        {
            cout<<"lovely"<<" "<<t<<endl;
        }

    }
    return 0;
}
