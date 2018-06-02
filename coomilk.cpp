#include<iostream>
#include<algorithm>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
    unsigned int t;
    cin>>t;
    while(t--)
    {
        unsigned int n,flag=0;
        cin>>n;
        string a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n-1;i++)
        {
            if((a[i]=="cookie"&&a[i+1]=="cookie")||(a[n-1]=="cookie"))
            {
                flag=1;
                break;
            }
        }
        if(n==1&&a[0]=="milk")
            cout<<"YES"<<endl;
        else if(n==1&&a[0]=="cookie")
            cout<<"NO"<<endl;
        else if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
