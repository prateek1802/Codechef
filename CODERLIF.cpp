#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<sstream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l=30;
        int a[30];
        for(int i=0;i<l;i++)
        {
            cin>>a[i];
        }
        string s="";
        for(int i=0;i<l;i++)
        {
            char x=a[i]+'0';
            s+=x;
        }
        
        string x="111111";
        if(s.find(x)!=string::npos) 
        {
            cout<<"#coderlifematters"<<endl;
        }
        else
            cout<<"#allcodersarefun"<<endl;
    }
    return 0;
}
