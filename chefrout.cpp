#include<iostream>
#include<algorithm>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int k=0;

        for(int i=0;i<a.length()-1;i++)
        {
            if(a[i]=='S'&&(a[i+1]=='E'||a[i+1]=='C'))
            {
                k=1;
            }
            else if(a[i]=='E'&&a[i+1]=='C')
            {
                k=1;
            }
        }
        if(k==1)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}
