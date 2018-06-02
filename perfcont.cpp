#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        long long int n,p;
        cin>>n>>p;
        long double arr[n];
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
        }

        int cWalk=0,cHard=0;
        for(int i=0;i<n;++i)
        {
            if(arr[i]>=p/2)
            {
                cWalk++;
            }

            else if(arr[i]<=p/10)
            {
                cHard++;
            }
        }

        if(cWalk==1&&cHard==2)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}
