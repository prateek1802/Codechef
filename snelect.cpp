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
        int snk=0,mng=0;
        int arr[a.length()];
        for(int i=0;i<a.length();i++)
        {
            arr[i]=0;
        }

        for(int i=0;i<a.length()-1;i++)
        {
            if(a[i]=='s'&&a[i+1]=='m'&&arr[i]==0)
            {
                a[i]='0';
                arr[i+1]=1;
            }
            if(a[i]=='m'&&a[i+1]=='s'&&arr[i]==0)
            {
                a[i+1]='0';
                arr[i]=1;
            }
        }

        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='s')
                snk++;
            else if(a[i]=='m')
                mng++;
        }

        if(snk>mng)
            cout<<"snakes"<<endl;
        else if(mng>snk)
            cout<<"mongooses"<<endl;
        else if(mng==snk)
            cout<<"tie"<<endl;
    }
    return 0;
}
