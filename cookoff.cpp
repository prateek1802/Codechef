#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int n,ck=0,s=0,e=0,m=0,em=0,mh=0,h=0;
        cin>>n;
        string arr[n];

        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }

        for(int i=0;i<n;++i)
        {
            if(arr[i]=="cakewalk")
            {
                ck++;
            }

            else if(arr[i]=="simple")
            {
                s++;
            }

            else if(arr[i]=="easy")
            {
                e++;
            }

            else if(arr[i]=="easy-medium")
            {
                em++;
            }

            else if(arr[i]=="medium")
            {
                m++;
            }

            else if(arr[i]=="medium-hard")
            {
                mh++;
            }

            else if(arr[i]=="hard")
            {
                h++;
            }
        }
        if(ck==1&&s==1&&e==1&&(m==1||em==1)&&(mh==1||h==1))
        {
            cout<<"Yes"<<endl;
        }

        else
            cout<<"No"<<endl;
    }
    return 0;
}
