#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<iomanip>
#include<strings.h>
#define size 50
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[100000];
        int l,r=0,g=0,b=0;
        cin>>l;
        cin>>a;
        for(int i=0;i<l;i++)
        {
            if(a[i]=='R')
                r++;
            else if(a[i]=='G')
                g++;
            else if(a[i]=='B')
                b++;
        }
        if(r>=g&&r>=b)
            cout<<l-r<<endl;
        else if(g>r&&g>b)
            cout<<l-g<<endl;
        else if(b>g&&b>r)
            cout<<l-b<<endl;
        else if(r==l||g==l||b==l)
            cout<<"0"<<endl;
    }
    return 0;
}
